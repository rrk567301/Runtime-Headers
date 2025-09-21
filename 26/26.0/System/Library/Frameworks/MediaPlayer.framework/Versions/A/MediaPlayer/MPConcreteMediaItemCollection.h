@class MPMediaItem, MPMediaQuery, MPConcreteMediaEntityPropertiesCache;

@interface MPConcreteMediaItemCollection : MPMediaItemCollection <NSCopying, MPCacheableConcreteMediaEntity> {
    long long _identifier;
    MPMediaQuery *_itemsQuery;
    long long _grouping;
    MPMediaItem *_representativeItem;
    MPConcreteMediaEntityPropertiesCache *_propertiesCache;
}

@property (readonly, retain, nonatomic) MPConcreteMediaEntityPropertiesCache *cachedPropertyValues;

+ (BOOL)supportsSecureCoding;
+ (id)createUncachedMediaItemCollectionWithIdentifier:(long long)a0 valuesForProperties:(id)a1 itemsQuery:(id)a2 grouping:(long long)a3 representativeItemIdentifier:(long long)a4;

- (id)items;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)valueForProperty:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)representativeItem;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)persistentID;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (id)mediaLibrary;
- (void)_enumerateItemPersistentIDsUsingBlock:(id /* block */)a0;
- (id)_initWithIdentifier:(long long)a0 valuesForProperties:(id)a1 itemsQuery:(id)a2 grouping:(long long)a3 representativeItemIdentifier:(long long)a4 propertiesCache:(id)a5;
- (id)_tokenBinaryIdentifierAsString;
- (void)enumerateValuesForProperties:(id)a0 usingBlock:(id /* block */)a1;
- (long long)groupingType;
- (id)initWithIdentifier:(long long)a0 itemsQuery:(id)a1 grouping:(long long)a2;
- (id)initWithIdentifier:(long long)a0 valuesForProperties:(id)a1 itemsQuery:(id)a2 grouping:(long long)a3 representativeItemIdentifier:(long long)a4;
- (id)initWithMultiverseIdentifier:(id)a0 library:(id)a1;
- (void)invalidateCachedProperties;
- (id)itemsQuery;
- (void)setValue:(id)a0 forProperty:(id)a1 withCompletionBlock:(id /* block */)a2;
- (id)valuesForProperties:(id)a0;

@end
