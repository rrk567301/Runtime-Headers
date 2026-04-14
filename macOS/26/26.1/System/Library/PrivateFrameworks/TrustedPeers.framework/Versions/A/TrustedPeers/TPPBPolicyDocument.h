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

- (void)addIntroducersByCategory:(id)a0;
- (void)clearKeyViewMappings;
- (id)dictionaryRepresentation;
- (void)addInheritedExcludedViews:(id)a0;
- (unsigned long long)hash;
- (id)userControllableViewsAtIndex:(unsigned long long)a0;
- (id)modelToCategoryAtIndex:(unsigned long long)a0;
- (void)addUserControllableViews:(id)a0;
- (void)addPiggybackViews:(id)a0;
- (void)clearModelToCategorys;
- (void)clearRedactions;
- (id)redactionsAtIndex:(unsigned long long)a0;
- (unsigned long long)priorityViewsCount;
- (id)piggybackViewsAtIndex:(unsigned long long)a0;
- (void)clearPriorityViews;
- (id)categoriesByViewAtIndex:(unsigned long long)a0;
- (void)clearInheritedExcludedViews;
- (id)description;
- (unsigned long long)keyViewMappingsCount;
- (unsigned long long)modelToCategorysCount;
- (unsigned long long)userControllableViewsCount;
- (id)inheritedExcludedViewsAtIndex:(unsigned long long)a0;
- (id)priorityViewsAtIndex:(unsigned long long)a0;
- (void)addKeyViewMapping:(id)a0;
- (unsigned long long)introducersByCategorysCount;
- (void)clearCategoriesByViews;
- (unsigned long long)categoriesByViewsCount;
- (void).cxx_destruct;
- (void)addRedactions:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)redactionsCount;
- (id)introducersByCategoryAtIndex:(unsigned long long)a0;
- (void)addCategoriesByView:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearIntroducersByCategorys;
- (BOOL)isEqual:(id)a0;
- (void)clearPiggybackViews;
- (unsigned long long)piggybackViewsCount;
- (void)clearUserControllableViews;
- (void)copyTo:(id)a0;
- (unsigned long long)inheritedExcludedViewsCount;
- (BOOL)readFrom:(id)a0;
- (id)keyViewMappingAtIndex:(unsigned long long)a0;
- (void)addModelToCategory:(id)a0;
- (void)addPriorityViews:(id)a0;
- (void)writeTo:(id)a0;

@end
