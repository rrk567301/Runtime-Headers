@class NSMutableDictionary;

@interface WBSPasswordWordListCollection : NSObject {
    NSMutableDictionary *_wordListsByIdentifiers;
}

+ (id)commonPasscodeWordListCollection;
+ (id)commonPasswordWordListCollection;

- (void).cxx_destruct;
- (id)init;
- (void)addWordList:(id)a0;
- (id)entriesForString:(id)a0;
- (void)enumerateEntriesForString:(id)a0 withBlock:(id /* block */)a1;

@end
