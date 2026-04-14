@class NSArray, MPMediaItem, MPMediaQuery;

@interface MPMediaItemCollection : MPMediaEntity {
    unsigned long long _containedMediaTypes;
    BOOL _initializedContainedMediaTypes;
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

+ (BOOL)supportsSecureCoding;
+ (id)titlePropertyForGroupingType:(long long)a0;
+ (id)collectionWithItems:(id)a0;
+ (id)sortTitlePropertyForGroupingType:(long long)a0;
+ (id)representativePersistentIDPropertyForGroupingType:(long long)a0;
+ (id)artworkCatalogCachePropertiesForGroupingType:(long long)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (id)artworkCatalog;
- (id)initWithMultiverseIdentifier:(id)a0 library:(id)a1;
- (id)multiverseIdentifier;
- (void)_enumerateItemPersistentIDsUsingBlock:(id /* block */)a0;
- (id)initWithItemsQuery:(id)a0;
- (id)itemsQuery;
- (void)setValue:(id)a0 forProperty:(id)a1 withCompletionBlock:(id /* block */)a2;
- (id)albumArtistArtworkCatalog;
- (id)artistArtworkCatalog;
- (id)_artworkCatalogRepresentativeItem;

@end
