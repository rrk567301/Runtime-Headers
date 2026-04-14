@class NSString;

@interface DDLookupRegexp : DDBasicRegexp <NSCopying> {
    long long _tokenId;
    NSString *_name;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)name;
- (void)setName:(id)a0;
- (long long)token;
- (int)splitRegexpWithDelegate:(id)a0 owner:(id)a1;
- (void)appendDescriptionToString:(id)a0 depth:(int)a1;
- (id)prettyPrintWithPriority:(int)a0;
- (BOOL)acceptEmptyWordWithManager:(id)a0;
- (id)initWithTokenId:(long long)a0;
- (id)symbolsInGrammar:(id)a0 container:(id)a1 withManager:(id)a2;
- (id)monElement;

@end
