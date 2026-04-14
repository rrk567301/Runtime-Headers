@class NSSQLEntity, NSMutableArray, NSArray;

@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate {
    NSMutableArray *_subclauses;
    NSSQLEntity *_disambiguatingEntity;
    NSArray *_disambiguationKeypath;
    BOOL _disambiguationKeypathHasToMany;
}

- (BOOL)isOrScoped;
- (id)initWithPredicate:(id)a0 inScope:(id)a1 inContext:(id)a2;
- (id)disambiguatingEntity;
- (id)generateSQLStringInContext:(id)a0;
- (BOOL)disambiguationKeypathHasToMany;
- (void)setDisambiguatingEntity:(id)a0 withKeypath:(id)a1 hasToMany:(BOOL)a2;
- (id)disambiguationKeypath;
- (void)dealloc;

@end
