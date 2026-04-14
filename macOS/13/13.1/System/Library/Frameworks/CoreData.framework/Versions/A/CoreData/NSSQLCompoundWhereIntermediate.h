@class NSSQLEntity, NSMutableArray, NSArray;

@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate {
    NSMutableArray *_subclauses;
    NSSQLEntity *_disambiguatingEntity;
    NSArray *_disambiguationKeypath;
    BOOL _disambiguationKeypathHasToMany;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;
- (id)initWithPredicate:(id)a0 inScope:(id)a1 inContext:(id)a2;
- (id)disambiguatingEntity;
- (id)disambiguationKeypath;
- (BOOL)disambiguationKeypathHasToMany;
- (void)setDisambiguatingEntity:(id)a0 withKeypath:(id)a1 hasToMany:(BOOL)a2;
- (BOOL)isOrScoped;

@end
