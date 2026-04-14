@class NSString;

@interface DDAtomicRegexp : DDBasicRegexp <NSCopying> {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSString *_simplePattern;
    BOOL _caseInsensitive;
    int _type;
    NSString *_displayName;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)type;
- (void)setDisplayName:(id)a0;
- (id)displayName;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)caseInsensitive;
- (id)initWithAnyChar;
- (BOOL)acceptEmptyWordWithManager:(id)a0;
- (void)appendDescriptionToString:(id)a0 depth:(int)a1;
- (void)appendToDescription:(id)a0 priority:(int)a1 withManager:(id)a2;
- (id)initWithCharacter:(unsigned short)a0;
- (id)initWithEmptyString;
- (id)initWithICUPattern:(id)a0;
- (id)initWithSimplePattern:(id)a0 caseInsensitive:(BOOL)a1;
- (id)monElement;
- (id)prettyPrintWithPriority:(int)a0;
- (void)setCaseInsensitive:(BOOL)a0;
- (int)splitRegexpWithDelegate:(id)a0 owner:(id)a1;
- (id)stringPattern;
- (id)symbolsInGrammar:(id)a0 container:(id)a1 withManager:(id)a2;

@end
