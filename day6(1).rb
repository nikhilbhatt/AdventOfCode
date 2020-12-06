file= open('./inputday6.txt')
ans=0
a=Array.new(26,0)
for f in file.readlines
    if f[0]=="\n"
        for x in a
            if x>=1 
                ans=ans+1
            end
        end
        a=Array.new(26,0)
    else
        (0..f.length-1).each do |i|
            if f[i].ord!=10
                a[f[i].ord-97]=1
                # puts f[i]
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

