@class NSSQLEntity, NSArray;

@interface NSSQLTernaryExpressionIntermediate : NSSQLExpressionIntermediate {
    NSSQLEntity *_disambiguatingEntity;
    NSArray *_disambiguationKeypath;
    char _disambiguationKeypathHasToMany;
}

- (void)dealloc;
- (id)disambiguatingEntity;
- (id)disambiguationKeypath;
- (char)disambiguationKeypathHasToMany;
- (id)generateSQLStringInContext:(id)a0;
- (void)setDisambiguatingEntity:(id)a0 withKeypath:(id)a1 hasToMany:(char)a2;

@end
