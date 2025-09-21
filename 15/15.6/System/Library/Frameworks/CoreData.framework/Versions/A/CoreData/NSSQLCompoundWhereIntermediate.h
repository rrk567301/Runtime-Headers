@class NSSQLEntity, NSMutableArray, NSArray;

@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate {
    NSMutableArray *_subclauses;
    NSSQLEntity *_disambiguatingEntity;
    NSArray *_disambiguationKeypath;
    char _disambiguationKeypathHasToMany;
}

- (void)dealloc;
- (id)disambiguatingEntity;
- (id)disambiguationKeypath;
- (char)disambiguationKeypathHasToMany;
- (id)generateSQLStringInContext:(id)a0;
- (id)initWithPredicate:(id)a0 inScope:(id)a1 inContext:(id)a2;
- (char)isOrScoped;
- (void)setDisambiguatingEntity:(id)a0 withKeypath:(id)a1 hasToMany:(char)a2;

@end
