@class NSMutableArray;

@interface TPPBPolicyDocument : PBCodable <NSCopying> {
    struct { unsigned char policyVersion : 1; } _has;
}

@property (nonatomic) BOOL hasPolicyVersion;
@property (nonatomic) unsigned long long policyVersion;
@property (retain, nonatomic) NSMutableArray *modelToCategorys;
@property (retain, nonatomic) NSMutableArray *categoriesByViews;
@property (retain, nonatomic) NSMutableArray *introducersByCategorys;
@property (retain, nonatomic) NSMutableArray *redactions;
@property (retain, nonatomic) NSMutableArray *keyViewMappings;
@property (retain, nonatomic) NSMutableArray *userControllableViews;
@property (retain, nonatomic) NSMutableArray *piggybackViews;
@property (retain, nonatomic) NSMutableArray *priorityViews;
@property (retain, nonatomic) NSMutableArray *inheritedExcludedViews;

+ (Class)categoriesByViewType;
+ (Class)inheritedExcludedViewsType;
+ (Class)introducersByCategoryType;
+ (Class)keyViewMappingType;
+ (Class)modelToCategoryType;
+ (Class)piggybackViewsType;
+ (Class)priorityViewsType;
+ (Class)redactionsType;
+ (Class)userControllableViewsType;

- (unsigned long long)priorityViewsCount;
- (void)clearPiggybackViews;
- (void)addPriorityViews:(id)a0;
- (void)addIntroducersByCategory:(id)a0;
- (void)clearPriorityViews;
- (void)addInheritedExcludedViews:(id)a0;
- (unsigned long long)userControllableViewsCount;
- (id)modelToCategoryAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)introducersByCategoryAtIndex:(unsigned long long)a0;
- (unsigned long long)modelToCategorysCount;
- (void)clearUserControllableViews;
- (void)clearModelToCategorys;
- (void)addRedactions:(id)a0;
- (void)clearRedactions;
- (void)copyTo:(id)a0;
- (unsigned long long)categoriesByViewsCount;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)keyViewMappingsCount;
- (unsigned long long)piggybackViewsCount;
- (id)redactionsAtIndex:(unsigned long long)a0;
- (unsigned long long)inheritedExcludedViewsCount;
- (id)inheritedExcludedViewsAtIndex:(unsigned long long)a0;
- (void)addPiggybackViews:(id)a0;
- (void)clearKeyViewMappings;
- (id)dictionaryRepresentation;
- (void)clearInheritedExcludedViews;
- (void).cxx_destruct;
- (void)addModelToCategory:(id)a0;
- (unsigned long long)redactionsCount;
- (unsigned long long)introducersByCategorysCount;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)userControllableViewsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void)clearCategoriesByViews;
- (void)addCategoriesByView:(id)a0;
- (id)description;
- (id)piggybackViewsAtIndex:(unsigned long long)a0;
- (id)priorityViewsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)keyViewMappingAtIndex:(unsigned long long)a0;
- (void)addUserControllableViews:(id)a0;
- (void)clearIntroducersByCategorys;
- (void)addKeyViewMapping:(id)a0;
- (id)categoriesByViewAtIndex:(unsigned long long)a0;

@end
