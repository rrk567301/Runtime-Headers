@class NSMutableArray, NSMutableDictionary;

@interface TIDocumentWordsAligned : NSObject

@property (retain, nonatomic) NSMutableArray *inDocumentWordsStack;
@property (retain, nonatomic) NSMutableDictionary *leftContextToWordMap;

- (void)replaceLeftContextToWordMapKey:(id)a0 withNewKey:(id)a1;
- (id)lastWord;
- (void)insertWord:(id)a0 atIndex:(long long)a1;
- (void).cxx_destruct;
- (id)matchingLeftContextToWordMapKey:(id)a0;
- (id)init;
- (id)preferredLeftContextToWordMapKeyForLeftContext:(id)a0 andMatchingLeftContext:(id)a1;
- (id)wordsFromContext:(id)a0;
- (unsigned long long)wordsCount;
- (id)description;
- (id)deleteWordsUpToContext:(id)a0;
- (id)_wordsFromContext:(id)a0 shouldDelete:(BOOL)a1;
- (void)pushWordToDocument:(id)a0;
- (void)removeFromContextMap:(id)a0;
- (void)addToContextMap:(id)a0;
- (id)wordsForContext:(id)a0;

@end
