@class NSSet, NSArray, NSMutableSet, NSDictionary;

@interface MPMediaQueryCriteria : NSObject <NSCopying> {
    char _useSections;
}

@property (readonly, nonatomic) char specifiesPlaylistItems;
@property (readonly, nonatomic) char excludesEntitiesWithBlankNames;
@property (copy, nonatomic) NSMutableSet *filterPredicates;
@property (copy, nonatomic) NSSet *itemPropertiesToFetch;
@property (copy, nonatomic) NSSet *collectionPropertiesToFetch;
@property (nonatomic) long long groupingType;
@property (nonatomic) unsigned long long entityLimit;
@property (nonatomic) unsigned long long entityOrder;
@property (copy, nonatomic) NSArray *orderingProperties;
@property (nonatomic) char ignoreSystemFilterPredicates;
@property (nonatomic) char ignoreRestrictionsPredicates;
@property (nonatomic) char includeNonLibraryEntities;
@property (nonatomic) char includeEntitiesWithBlankNames;
@property (copy, nonatomic) NSDictionary *orderingDirectionMappings;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addFilterPredicate:(id)a0;
- (void)addFilterPredicates:(id)a0;
- (id)predicateForProperty:(id)a0;
- (void)removeFilterPredicate:(id)a0;
- (void)removePredicatesForProperty:(id)a0;

@end
