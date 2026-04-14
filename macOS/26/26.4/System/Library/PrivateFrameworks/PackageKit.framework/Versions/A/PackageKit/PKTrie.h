@interface PKTrie : NSObject {
    void /* unknown type, empty encoding */ trie;
}

- (void)addString:(id)a0;
- (BOOL)contains:(id)a0;
- (BOOL)hasPrefix:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)containsStringPrefixing:(id)a0;

@end
