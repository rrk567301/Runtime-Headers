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

- (id)userControllableViewsAtIndex:(unsigned long long)a0;
- (id)keyViewMappingAtIndex:(unsigned long long)a0;
- (id)modelToCategoryAtIndex:(unsigned long long)a0;
- (unsigned long long)introducersByCategorysCount;
- (id)dictionaryRepresentation;
- (unsigned long long)priorityViewsCount;
- (void)addCategoriesByView:(id)a0;
- (void)addRedactions:(id)a0;
- (void)addIntroducersByCategory:(id)a0;
- (id)description;
- (void)clearCategoriesByViews;
- (void)clearPiggybackViews;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)addInheritedExcludedViews:(id)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)modelToCategorysCount;
- (void)writeTo:(id)a0;
- (void)clearUserControllableViews;
- (void)addPiggybackViews:(id)a0;
- (unsigned long long)keyViewMappingsCount;
- (void)clearIntroducersByCategorys;
- (void)addPriorityViews:(id)a0;
- (void)clearKeyViewMappings;
- (void).cxx_destruct;
- (id)introducersByCategoryAtIndex:(unsigned long long)a0;
- (id)piggybackViewsAtIndex:(unsigned long long)a0;
- (id)categoriesByViewAtIndex:(unsigned long long)a0;
- (void)clearRedactions;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearPriorityViews;
- (unsigned long long)piggybackViewsCount;
- (void)clearInheritedExcludedViews;
- (void)addUserControllableViews:(id)a0;
- (unsigned long long)inheritedExcludedViewsCount;
- (void)addModelToCategory:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearModelToCategorys;
- (id)inheritedExcludedViewsAtIndex:(unsigned long long)a0;
- (unsigned long long)categoriesByViewsCount;
- (id)priorityViewsAtIndex:(unsigned long long)a0;
- (unsigned long long)userControllableViewsCount;
- (unsigned long long)hash;
- (void)addKeyViewMapping:(id)a0;
- (unsigned long long)redactionsCount;
- (id)redactionsAtIndex:(unsigned long long)a0;

@end
