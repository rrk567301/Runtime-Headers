@class NSString;

@interface DDLookupRegexp : DDBasicRegexp <NSCopying> {
    long long _tokenId;
    NSString *_name;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (void)setName:(id)a0;
- (long long)token;
- (BOOL)acceptEmptyWordWithManager:(id)a0;
- (void)appendDescriptionToString:(id)a0 depth:(int)a1;
- (id)initWithTokenId:(long long)a0;
- (id)monElement;
- (id)prettyPrintWithPriority:(int)a0;
- (int)splitRegexpWithDelegate:(id)a0 owner:(id)a1;
- (id)symbolsInGrammar:(id)a0 container:(id)a1 withManager:(id)a2;

@end
