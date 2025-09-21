@class NSArray, MPMediaItem, MPMediaQuery;

@interface MPMediaItemCollection : MPMediaEntity {
    unsigned long long _containedMediaTypes;
    char _initializedContainedMediaTypes;
    NSArray *_items;
    unsigned long long _itemsCount;
    MPMediaQuery *_itemsQuery;
    MPMediaItem *_representativeItem;
}

@property (readonly, nonatomic) long long groupingType;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) MPMediaItem *representativeItem;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long mediaTypes;

+ (char)supportsSecureCoding;
+ (id)artworkCatalogCachePropertiesForGroupingType:(long long)a0;
+ (id)collectionWithItems:(id)a0;
+ (id)representativePersistentIDPropertyForGroupingType:(long long)a0;
+ (id)sortTitlePropertyForGroupingType:(long long)a0;
+ (id)titlePropertyForGroupingType:(long long)a0;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithItems:(id)a0;
- (char)setValue:(id)a0 forProperty:(id)a1;
- (id)_artworkCatalogRepresentativeItem;
- (void)_enumerateItemPersistentIDsUsingBlock:(id /* block */)a0;
- (id)albumArtistArtworkCatalog;
- (id)artistArtworkCatalog;
- (id)artworkCatalog;
- (id)initWithItemsQuery:(id)a0;
- (id)initWithMultiverseIdentifier:(id)a0 library:(id)a1;
- (id)itemsQuery;
- (id)multiverseIdentifier;
- (void)setValue:(id)a0 forProperty:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)setValuesForProperties:(id)a0 trackList:(id)a1 withCompletionBlock:(id /* block */)a2;

@end
