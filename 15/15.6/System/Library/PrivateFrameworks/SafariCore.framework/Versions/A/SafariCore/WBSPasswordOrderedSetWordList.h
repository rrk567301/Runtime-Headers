@class NSOrderedSet;

@interface WBSPasswordOrderedSetWordList : WBSPasswordWordList {
    NSOrderedSet *_words;
}

@property (readonly, nonatomic, getter=isSensitive) char sensitive;

- (void).cxx_destruct;
- (void)enumerateEntriesForString:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 isSensitive:(char)a1 orderedWords:(id)a2;
- (id)initWithIdentifier:(id)a0 isSensitive:(char)a1 orderedWordsArray:(id)a2;

@end
