word = 'elephant'
word_count = { letter : word.count(letter) for letter in set(word) }
print(word_count)
for w in word_count :
    print(w,word_count[w])
