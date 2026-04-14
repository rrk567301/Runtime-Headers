@class NSSQLEntity, NSMutableArray, NSArray;

@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate {
    NSMutableArray *_subclauses;
    NSSQLEntity *_disambiguatingEntity;
    NSArray *_disambiguationKeypath;
    BOOL _disambiguationKeypathHasToMany;
}

- (id)initWithPredicate:(id)a0 inScope:(id)a1 inContext:(id)a2;
- (id)disambiguationKeypath;
- (id)disambiguatingEntity;
- (BOOL)disambiguationKeypathHasToMany;
- (BOOL)isOrScoped;
- (void)setDisambiguatingEntity:(id)a0 withKeypath:(id)a1 hasToMany:(BOOL)a2;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;

@end
