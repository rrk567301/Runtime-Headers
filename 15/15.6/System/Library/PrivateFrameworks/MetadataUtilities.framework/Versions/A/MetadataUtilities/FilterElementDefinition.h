@class NSString, NSMutableDictionary;

@interface FilterElementDefinition : NSObject {
    NSString *_rootName;
    unsigned long long _rule;
    unsigned long long _mask;
    unsigned long long _subRule;
    unsigned long long _subMask;
    int _subAuxValueCount;
    char _hasAuxValue;
    unsigned long long _auxValue;
    NSMutableDictionary *_setOfMatches;
    NSString *_namedLink;
    FilterElementDefinition *_wildCard;
    FilterElementDefinition *_superWildCard;
}

- (void)dealloc;
- (void)addRuleField:(int)a0 value:(int)a1 hasAuxValue:(char)a2 auxValue:(unsigned long long)a3 inside:(char)a4 forPathComponents:(id)a5 permitLink:(char)a6 componentIndex:(int)a7 parentElement:(id)a8 copyParentWildcardLink:(char)a9;
- (void)dump:(int)a0;
- (void)dumpAttributesInto:(char *)a0 forLevel:(int)a1;
- (struct { unsigned int x0; unsigned char x1; })encodeInto:(struct _MDPlistContainer { } *)a0 auxArray:(id)a1 namedRootMap:(id)a2;
- (id)initAsRoot:(id)a0;
- (char)isBottomValue;

@end
