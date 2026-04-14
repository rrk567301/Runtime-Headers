@class NSSQLEntity, NSArray;

@interface NSSQLTernaryExpressionIntermediate : NSSQLExpressionIntermediate {
    NSSQLEntity *_disambiguatingEntity;
    NSArray *_disambiguationKeypath;
    BOOL _disambiguationKeypathHasToMany;
}

- (id)disambiguatingEntity;
- (void)dealloc;
- (void)setDisambiguatingEntity:(id)a0 withKeypath:(id)a1 hasToMany:(BOOL)a2;
- (id)generateSQLStringInContext:(id)a0;
- (BOOL)disambiguationKeypathHasToMany;
- (id)disambiguationKeypath;

@end
