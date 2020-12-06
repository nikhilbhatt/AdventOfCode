file= open('./inputday6.txt')
ans=0
temp=0
a=Array.new(26,0)
b=Array.new(26,0)
for f in file.readlines
    a=b
    b=Array.new(26,0)
    if f[0]=="\n"
        temp=0
        for x in a
            if x>=1 
                ans=ans+1
            end
        end
    else
        if temp==0 
            temp=1
            (0..f.length-1).each do |i|
                if f[i].ord!=10
                    a[f[i].ord-97]=1
                    b[f[i].ord-97]=1
                    # puts f[i]
                end
            end
        else
            (0..f.length-1).each do |i|
                if f[i].ord!=10
                    if a[f[i].ord-97]==1
                        b[f[i].ord-97]=1
                    end
                end
            end
        end
        
    end
end
file.close
for x in a
        if x>=1 
            ans=ans+1
        end
    end
puts ans
