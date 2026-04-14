@class NSSet, NSArray, NSMutableSet, NSDictionary;

@interface MPMediaQueryCriteria : NSObject <NSCopying> {
    BOOL _useSections;
}

@property (readonly, nonatomic) BOOL specifiesPlaylistItems;
@property (readonly, nonatomic) BOOL excludesEntitiesWithBlankNames;
@property (copy, nonatomic) NSMutableSet *filterPredicates;
@property (copy, nonatomic) NSSet *itemPropertiesToFetch;
@property (copy, nonatomic) NSSet *collectionPropertiesToFetch;
@property (nonatomic) long long groupingType;
@property (nonatomic) unsigned long long entityLimit;
@property (nonatomic) unsigned long long entityOrder;
@property (copy, nonatomic) NSArray *orderingProperties;
@property (nonatomic) BOOL ignoreSystemFilterPredicates;
@property (nonatomic) BOOL ignoreRestrictionsPredicates;
@property (nonatomic) BOOL includeNonLibraryEntities;
@property (nonatomic) BOOL includeEntitiesWithBlankNames;
@property (copy, nonatomic) NSDictionary *orderingDirectionMappings;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)addFilterPredicate:(id)a0;
- (void)addFilterPredicates:(id)a0;
- (id)predicateForProperty:(id)a0;
- (void)removeFilterPredicate:(id)a0;
- (void)removePredicatesForProperty:(id)a0;

@end
