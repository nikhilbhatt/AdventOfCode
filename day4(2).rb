file= open('./inputday4.txt')
ans=0
temp=0
for r in file.readlines
    if r[0]=="\n"
        if temp>=7 
            ans+=1
        end
        # puts temp
        temp=0
    else
        arr=r.split
        arr.each do |a|
            x,y=a.split(':')
            if x=='byr'
                if y.to_i>=1920&&y.to_i<=2002
                    temp+=1
                end
            elsif x=='iyr'
                if y.to_i>=2010&&y.to_i<=2020
                    temp+=1
                end
            elsif x=='eyr'
                if y.to_i>=2020&&y.to_i<=2030
                    temp+=1
                end
            elsif x=='hgt'
                if y[-1]=='n'&& y[-2]== 'i'
                    digit=0
                    y.split('').each do |r|
                        if r.ord>=48&&r.ord<=57
                            digit=digit*10+r.to_i
                        end
                    end
                    # puts digit
                    if digit>=59 && digit <=76
                        temp+=1
                    end
                elsif y[-1]=='m' &&y[-2]=='c'
                    digit=0
                    y.split('').each do |r|
                        if r.ord>=48 && r.ord<=57
                         digit=digit*10+r.to_i
                        end
                    end
                    # puts digit
                    if digit>=150 && digit <=193
                        temp+=1
                    end
                end
            elsif x=='hcl'
                if y[0]=='#'&&y.length==7&& ((y[1].ord>=97&&y[1].ord<=102)||(y[1].ord<=57 && y[1].ord>=48))&& ((y[2].ord>=97&&y[2].ord<=102) ||(y[2].ord<=57 && y[2].ord>=48)) && ((y[3].ord>=97 && y[3].ord<=102) ||(y[3].ord<=57 && y[3].ord>=48)) && ((y[4].ord>=97 && y[4].ord<=102) || (y[4].ord<=57 && y[4].ord>=48))&& ((y[5].ord>=97 && y[5].ord<=102 )||(y[5].ord<=57 && y[5].ord>=48))&& ((y[6].ord>=97 && y[6].ord<=102 )||( y[6].ord<=57 && y[6].ord>=48))
                    temp+=1
                end
                
            elsif x=='pid'
                if y.length == 9
                    temp+=1
                end
                
            elsif x=='ecl'
                if y=='amb'||y=='blu'||y=='brn'||y=='gry'||y=='grn'||y=='hzl'||y=='oth'
                    temp+=1
                end
            end
        end
    end
end

file.close
if temp>=7
    ans+=1
end
puts ans
