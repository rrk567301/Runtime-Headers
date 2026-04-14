@class NSString, NSArray, MPMediaQuery;

@interface MPMediaPlaylist : MPMediaItemCollection {
    NSArray *_representativeArtists;
    MPMediaQuery *_seedTracksQuery;
}

@property (readonly, nonatomic) unsigned long long persistentID;
@property (readonly, nonatomic) NSString *cloudGlobalID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long playlistAttributes;
@property (readonly, nonatomic) NSArray *seedItems;
@property (readonly, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) NSString *authorDisplayName;

+ (BOOL)supportsSecureCoding;
+ (BOOL)canFilterByProperty:(id)a0;
+ (void)_createFilterableDictionary;
+ (BOOL)_isValidPlaylistProperty:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)valueForProperty:(id)a0;
- (id)items;
- (unsigned long long)mediaTypes;
- (id)artworkCatalog;
- (id)initWithPersistentID:(unsigned long long)a0;
- (id)initWithPersistentID:(unsigned long long)a0 mediaLibrary:(id)a1;
- (id)initWithMultiverseIdentifier:(id)a0 library:(id)a1;
- (void)addItemWithProductID:(id)a0 completionHandler:(id /* block */)a1;
- (void)addMediaItems:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)existsInLibrary;
- (void)removeFirstItem;
- (id)representativeItem;
- (id)multiverseIdentifier;
- (id)representativeArtists;
- (id)seedTracksQuery;
- (BOOL)isCloudMix;
- (id)tiledArtworkCatalogWithRows:(unsigned long long)a0 columns:(unsigned long long)a1;
- (id)artworkCatalogsWithMaximumCount:(unsigned long long)a0;

@end
