file= open('./inputday4.txt')
ans=0
temp=0
for r in file.readlines
    if r[0]=="\n"
        # puts temp
        if temp>=7 
            ans+=1
        end
        temp=0
        # puts 'empty'
    else
        arr=r.split
        arr.each do |a|
            if a[0]=='c'&&a[1]=='i'
                temp+=0
            else
                temp+=1
            end
        end
    end
end
file.close
if temp>=7
    ans+=1
end
puts ans
