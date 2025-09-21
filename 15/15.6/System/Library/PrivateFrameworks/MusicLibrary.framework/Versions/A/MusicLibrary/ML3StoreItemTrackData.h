@class NSData, NSArray, NSDateFormatter;

@interface ML3StoreItemTrackData : NSObject {
    NSArray *_lookupItems;
    NSData *_trackData;
    NSArray *_parsedStoreItemsImportProperties;
    NSDateFormatter *_storePlatformDateFormatter;
}

@property (readonly, nonatomic) NSData *trackData;
@property (readonly, nonatomic) NSArray *parsedStoreItemsImportProperties;
@property (readonly, nonatomic) unsigned long long trackCount;

- (void).cxx_destruct;
- (char)_platformMetadataItemIsAUCKind:(id)a0;
- (id)_allSongItemsFromCollectionLookupItem:(id)a0;
- (id)_allSongItemsFromLookupItems:(id)a0;
- (id)_artworkTokenForItemWithCollectionID:(long long)a0 itemID:(long long)a1;
- (id)_artworkTokenFromLookupItem:(id)a0;
- (id)_bestAlbumArtworkImageURLFromStoreArtworkVariants:(id)a0;
- (id)_bestArtworkImageURLFromStoreArtworkVariants:(id)a0 cropStyle:(id)a1;
- (id)_bestPlaylistArtworkImageURLFromStoreArtworkVariants:(id)a0;
- (long long)_episodeTypeFromVideoSubTypeString:(id)a0;
- (id)_importDictionaryForLookupItem:(id)a0 parentCollectionCache:(id)a1;
- (id)_lookupItemArtworksForArtworkDictionaries:(id)a0;
- (id)_parentDictForItemAlbumId:(id)a0;
- (char)_platformMetadataItem:(id)a0 matchesKind:(id)a1;
- (char)_platformMetadataItemIsAUCAudioKind:(id)a0;
- (char)_platformMetadataItemIsAUCVideoKind:(id)a0;
- (char)_platformMetadataItemIsMovieKind:(id)a0;
- (char)_platformMetadataItemIsMusicKind:(id)a0;
- (char)_platformMetadataItemIsMusicVideoKind:(id)a0;
- (char)_platformMetadataItemIsSongKind:(id)a0;
- (char)_platformMetadataItemIsTVShowKind:(id)a0;
- (char)_platformMetadataItemIsVideoKind:(id)a0;
- (double)_songDurationFromOffersArray:(id)a0;
- (id)_storeItemsImportPropertiesFromLookupItems:(id)a0;
- (id)_storeItemsImportPropertiesFromTrackData:(id)a0;
- (id)_storePlatformDateFormatter;
- (id)initWithLookupItems:(id)a0;
- (id)initWithTrackData:(id)a0;

@end
