@class NSMutableDictionary;

@interface WBSPasswordWordListCollection : NSObject {
    NSMutableDictionary *_wordListsByIdentifiers;
}

+ (id)commonPasswordWordListCollection;
+ (id)commonPasscodeWordListCollection;

- (id)init;
- (void).cxx_destruct;
- (void)enumerateEntriesForString:(id)a0 withBlock:(id /* block */)a1;
- (id)entriesForString:(id)a0;
- (void)addWordList:(id)a0;

@end
