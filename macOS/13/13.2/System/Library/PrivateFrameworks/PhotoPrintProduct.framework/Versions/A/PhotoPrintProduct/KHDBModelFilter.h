@class KHDBEntity, NSMutableArray;

@interface KHDBModelFilter : NSObject <NSCopying> {
    NSMutableArray *_predicates;
    NSMutableArray *_ridIndexPredicates;
    NSMutableArray *_nonRidIndexPredicates;
}

@property (nonatomic) KHDBEntity *entity;
@property (nonatomic) int conjunction;

+ (id)indentForLevel:(long long)a0;
+ (id)createFilterForEntity:(id)a0 where:(id)a1;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (id)descriptionWithIndent:(long long)a0;
- (id)predicates;
- (void)addPredicate:(id)a0;
- (void)addPredicates:(id)a0;
- (id)sql;
- (void)appendArguments:(id)a0 toArgs:(id)a1;
- (BOOL)model:(id)a0 passesFilterWithArguments:(id)a1;
- (BOOL)canUseRidIndex;
- (id)idListForArgs:(id)a0 limitedToIds:(id)a1;
- (id)initWithEntity:(id)a0 conjunction:(int)a1;
- (id)initWithEntity:(id)a0 conjunction:(int)a1 predicates:(id)a2;
- (id)sqlForPredicates:(id)a0;
- (id)nonRidIndexSql;
- (id)nonRidIndexSqlArgsFromArgs:(id)a0;
- (id)ridIndexPredicates;
- (id)nonRidIndexPredicates;
- (BOOL)model:(id)a0 passesPredicates:(id)a1 withArguments:(id)a2;
- (id)anyOfModels:(id)a0 passingFilterWithArgs:(id)a1;
- (id)arrayOfModels:(id)a0 passingFilterWithArgs:(id)a1;
- (id)setOfModels:(id)a0 passingFilterWithArgs:(id)a1;
- (id)filterModelsFromEntity:(id)a0 withArgs:(id)a1;
- (id)ridIndexIdsForArgs:(id)a0 limitedToIds:(id)a1;
- (id)idListForArgs:(id)a0;
- (id)modelsForArgs:(id)a0 limitedToIds:(id)a1;
- (id)modelsForArgs:(id)a0;

@end
