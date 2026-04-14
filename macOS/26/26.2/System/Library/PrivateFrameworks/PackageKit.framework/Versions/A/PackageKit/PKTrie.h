@interface PKTrie : NSObject {
    void /* unknown type, empty encoding */ trie;
}

- (void).cxx_destruct;
- (void)addString:(id)a0;
- (BOOL)contains:(id)a0;
- (id)init;
- (BOOL)hasPrefix:(id)a0;
- (BOOL)containsStringPrefixing:(id)a0;

@end
