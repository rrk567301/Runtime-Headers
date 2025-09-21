@class SALocalSearchMapItem;

@interface SALocalSearchAddItemToMapCache : SADomainCommand

@property (retain, nonatomic) SALocalSearchMapItem *mapItem;

+ (id)addItemToMapCacheWithDictionary:(id)a0 context:(id)a1;
+ (id)addItemToMapCache;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
