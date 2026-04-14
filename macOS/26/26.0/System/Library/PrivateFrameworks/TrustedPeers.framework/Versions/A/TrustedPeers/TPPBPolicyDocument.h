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

- (id)priorityViewsAtIndex:(unsigned long long)a0;
- (void)addRedactions:(id)a0;
- (void)clearPiggybackViews;
- (unsigned long long)inheritedExcludedViewsCount;
- (void)clearUserControllableViews;
- (void)copyTo:(id)a0;
- (id)keyViewMappingAtIndex:(unsigned long long)a0;
- (void)addCategoriesByView:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addIntroducersByCategory:(id)a0;
- (void)clearModelToCategorys;
- (unsigned long long)redactionsCount;
- (id)dictionaryRepresentation;
- (void)addPriorityViews:(id)a0;
- (unsigned long long)priorityViewsCount;
- (id)userControllableViewsAtIndex:(unsigned long long)a0;
- (id)introducersByCategoryAtIndex:(unsigned long long)a0;
- (void)clearPriorityViews;
- (unsigned long long)categoriesByViewsCount;
- (unsigned long long)userControllableViewsCount;
- (void)addModelToCategory:(id)a0;
- (void)clearIntroducersByCategorys;
- (void)clearKeyViewMappings;
- (void)mergeFrom:(id)a0;
- (unsigned long long)piggybackViewsCount;
- (id)categoriesByViewAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearInheritedExcludedViews;
- (id)description;
- (void)clearCategoriesByViews;
- (id)modelToCategoryAtIndex:(unsigned long long)a0;
- (unsigned long long)introducersByCategorysCount;
- (void)clearRedactions;
- (unsigned long long)keyViewMappingsCount;
- (void)addInheritedExcludedViews:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)modelToCategorysCount;
- (unsigned long long)hash;
- (void)addPiggybackViews:(id)a0;
- (void)addKeyViewMapping:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)redactionsAtIndex:(unsigned long long)a0;
- (id)inheritedExcludedViewsAtIndex:(unsigned long long)a0;
- (id)piggybackViewsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addUserControllableViews:(id)a0;

@end
