@class NSString, NSDictionary, NSData, MPCPlaybackSharedListeningProperties;
@protocol MPCPlaybackIntentDataSource, NSSecureCoding;

@interface MPCPlaybackIntent : NSObject {
    id<MPCPlaybackIntentDataSource> _resolvedTracklistDataSource;
}

@property (readonly, nonatomic) id<MPCPlaybackIntentDataSource> tracklistDataSource;
@property (copy, nonatomic) NSString *localizedTitle;
@property (nonatomic) long long tracklistSource;
@property (retain, nonatomic) id<NSSecureCoding> tracklistToken;
@property (nonatomic) long long actionAfterQueueLoad;
@property (nonatomic) long long shuffleMode;
@property (nonatomic) long long repeatMode;
@property (nonatomic) BOOL prefersEnqueuingUsingAirPlay;
@property (copy, nonatomic) NSString *queueGroupingID;
@property (copy, nonatomic) NSString *playActivityFeatureName;
@property (copy, nonatomic) NSData *playActivityRecommendationData;
@property (copy, nonatomic) NSString *siriAssetInfo;
@property (copy, nonatomic) NSString *siriReferenceIdentifier;
@property (readonly, nonatomic) MPCPlaybackSharedListeningProperties *sharedListeningProperties;
@property (copy, nonatomic) NSDictionary *startTimeModifications;
@property (copy, nonatomic) NSDictionary *endTimeModifications;

+ (id)intentFromQueueDescriptor:(id)a0;
+ (id)continueListeningRadioPlaybackIntent;
+ (id)radioPlaybackIntentFromReference:(id)a0;
+ (id)radioPlaybackIntentFromAlbum:(id)a0;
+ (id)radioPlaybackIntentFromArtist:(id)a0;
+ (id)radioPlaybackIntentFromSong:(id)a0;
+ (id)radioPlaybackIntentWithStation:(id)a0;
+ (id)radioPlaybackIntentWithStationStringID:(id)a0;
+ (id)radioPlaybackIntentWithStationURL:(id)a0;
+ (void)buildSharedSessionIntentWithIntent:(id)a0 identity:(id)a1 extendedStatusCompletion:(id /* block */)a2;
+ (id)sharedSessionIntentWithProperties:(id)a0 identity:(id)a1;
+ (id)tracklistDataSourceForSource:(long long)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)getPlaybackContextWithCompletion:(id /* block */)a0;
- (void)getRemotePlaybackQueueRepresentationWithPlayerPath:(id)a0 completion:(id /* block */)a1;
- (void)getRemotePlaybackQueueDataWithCompletion:(id /* block */)a0;
- (void)getRepresentativeObjectWithProperties:(id)a0 completion:(id /* block */)a1;
- (void)getNowPlayingInfoWithArtworkCatalogConfiguration:(id /* block */)a0 artworkHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)getArchiveWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (id)generateNowPlayingContentItemWithMetadataObject:(id)a0;
- (id)artworkCatalogForMetadataModelObject:(id)a0;

@end
