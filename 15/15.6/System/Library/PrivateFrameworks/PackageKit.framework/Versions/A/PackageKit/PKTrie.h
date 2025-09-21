@interface PKTrie : NSObject {
    void /* unknown type, empty encoding */ trie;
}

- (id)init;
- (void).cxx_destruct;
- (char)hasPrefix:(id)a0;
- (char)contains:(id)a0;
- (void)addString:(id)a0;
- (char)containsStringPrefixing:(id)a0;

@end
