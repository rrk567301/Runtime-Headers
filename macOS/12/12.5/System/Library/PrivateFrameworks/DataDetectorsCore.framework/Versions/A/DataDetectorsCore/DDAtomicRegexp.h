@class NSString;

@interface DDAtomicRegexp : DDBasicRegexp <NSCopying> {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSString *_simplePattern;
    BOOL _caseInsensitive;
    int _type;
    NSString *_displayName;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (int)type;
- (id)displayName;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setDisplayName:(id)a0;
- (id)initWithSimplePattern:(id)a0 caseInsensitive:(BOOL)a1;
- (int)splitRegexpWithDelegate:(id)a0 owner:(id)a1;
- (void)appendDescriptionToString:(id)a0 depth:(int)a1;
- (id)prettyPrintWithPriority:(int)a0;
- (BOOL)acceptEmptyWordWithManager:(id)a0;
- (id)initWithEmptyString;
- (id)initWithCharacter:(unsigned short)a0;
- (id)initWithAnyChar;
- (id)initWithICUPattern:(id)a0;
- (BOOL)caseInsensitive;
- (void)setCaseInsensitive:(BOOL)a0;
- (id)stringPattern;
- (id)symbolsInGrammar:(id)a0 container:(id)a1 withManager:(id)a2;
- (id)monElement;
- (void)appendToDescription:(id)a0 priority:(int)a1 withManager:(id)a2;

@end
