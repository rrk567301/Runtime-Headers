@class KHDBEntity, NSMutableArray;

@interface KHDBModelFilter : NSObject <NSCopying> {
    NSMutableArray *_predicates;
    NSMutableArray *_ridIndexPredicates;
    NSMutableArray *_nonRidIndexPredicates;
}

@property (nonatomic) KHDBEntity *entity;
@property (nonatomic) int conjunction;

+ (id)createFilterForEntity:(id)a0 where:(id)a1;
+ (id)indentForLevel:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (BOOL)isEmpty;
- (id)descriptionWithIndent:(long long)a0;
- (id)predicates;
- (void)addPredicate:(id)a0;
- (void)addPredicates:(id)a0;
- (id)sql;
- (id)anyOfModels:(id)a0 passingFilterWithArgs:(id)a1;
- (id)arrayOfModels:(id)a0 passingFilterWithArgs:(id)a1;
- (id)setOfModels:(id)a0 passingFilterWithArgs:(id)a1;
- (id)modelsForArgs:(id)a0;
- (id)filterModelsFromEntity:(id)a0 withArgs:(id)a1;
- (id)idListForArgs:(id)a0;
- (id)initWithEntity:(id)a0 conjunction:(int)a1;
- (void)appendArguments:(id)a0 toArgs:(id)a1;
- (BOOL)model:(id)a0 passesFilterWithArguments:(id)a1;
- (BOOL)canUseRidIndex;
- (id)idListForArgs:(id)a0 limitedToIds:(id)a1;
- (id)sqlForPredicates:(id)a0;
- (id)ridIndexPredicates;
- (BOOL)model:(id)a0 passesPredicates:(id)a1 withArguments:(id)a2;
- (id)ridIndexIdsForArgs:(id)a0 limitedToIds:(id)a1;
- (id)nonRidIndexSql;
- (id)nonRidIndexSqlArgsFromArgs:(id)a0;
- (id)modelsForArgs:(id)a0 limitedToIds:(id)a1;
- (id)initWithEntity:(id)a0 conjunction:(int)a1 predicates:(id)a2;
- (id)nonRidIndexPredicates;

@end
