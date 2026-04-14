@class NSSQLEntity, NSArray;

@interface NSSQLTernaryExpressionIntermediate : NSSQLExpressionIntermediate {
    NSSQLEntity *_disambiguatingEntity;
    NSArray *_disambiguationKeypath;
    BOOL _disambiguationKeypathHasToMany;
}

- (id)disambiguationKeypath;
- (id)disambiguatingEntity;
- (BOOL)disambiguationKeypathHasToMany;
- (void)setDisambiguatingEntity:(id)a0 withKeypath:(id)a1 hasToMany:(BOOL)a2;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;

@end
