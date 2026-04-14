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

+ (Class)modelToCategoryType;
+ (Class)categoriesByViewType;
+ (Class)introducersByCategoryType;
+ (Class)redactionsType;
+ (Class)keyViewMappingType;
+ (Class)userControllableViewsType;
+ (Class)piggybackViewsType;
+ (Class)priorityViewsType;
+ (Class)inheritedExcludedViewsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addModelToCategory:(id)a0;
- (void)addCategoriesByView:(id)a0;
- (void)addIntroducersByCategory:(id)a0;
- (void)addRedactions:(id)a0;
- (void)addKeyViewMapping:(id)a0;
- (void)addUserControllableViews:(id)a0;
- (void)addPiggybackViews:(id)a0;
- (void)addPriorityViews:(id)a0;
- (void)addInheritedExcludedViews:(id)a0;
- (unsigned long long)modelToCategorysCount;
- (void)clearModelToCategorys;
- (id)modelToCategoryAtIndex:(unsigned long long)a0;
- (unsigned long long)categoriesByViewsCount;
- (void)clearCategoriesByViews;
- (id)categoriesByViewAtIndex:(unsigned long long)a0;
- (unsigned long long)introducersByCategorysCount;
- (void)clearIntroducersByCategorys;
- (id)introducersByCategoryAtIndex:(unsigned long long)a0;
- (unsigned long long)redactionsCount;
- (void)clearRedactions;
- (id)redactionsAtIndex:(unsigned long long)a0;
- (unsigned long long)keyViewMappingsCount;
- (void)clearKeyViewMappings;
- (id)keyViewMappingAtIndex:(unsigned long long)a0;
- (unsigned long long)userControllableViewsCount;
- (void)clearUserControllableViews;
- (id)userControllableViewsAtIndex:(unsigned long long)a0;
- (unsigned long long)piggybackViewsCount;
- (void)clearPiggybackViews;
- (id)piggybackViewsAtIndex:(unsigned long long)a0;
- (unsigned long long)priorityViewsCount;
- (void)clearPriorityViews;
- (id)priorityViewsAtIndex:(unsigned long long)a0;
- (unsigned long long)inheritedExcludedViewsCount;
- (void)clearInheritedExcludedViews;
- (id)inheritedExcludedViewsAtIndex:(unsigned long long)a0;

@end
