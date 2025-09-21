@interface CHStringOVSChecker : NSObject {
    struct _CFBurstTrie { } *_ovsTrie;
    unsigned int _flagsFilter;
    struct ObjectRef<const _LXLexicon *> { struct _LXLexicon *mCFObject; } _staticLexicon;
    struct ObjectRef<const _LXLexicon *> { struct _LXLexicon *mCFObject; } _customLexicon;
    void /* function */ *_stringNormalizationFunction;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithTrie:(struct _CFBurstTrie { } *)a0 staticLexicon:(struct _LXLexicon { } *)a1 customLexicon:(struct _LXLexicon { } *)a2 flags:(unsigned int)a3 stringNormalizationFunction:(void /* function */ *)a4;
- (char)isInappropriateLexiconEntry:(struct _LXEntry { } *)a0;
- (char)isInappropriateString:(id)a0;
- (char)isInappropriateTokenID:(unsigned int)a0;

@end
