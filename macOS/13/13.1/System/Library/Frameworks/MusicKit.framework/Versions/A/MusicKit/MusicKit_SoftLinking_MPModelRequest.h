@class MPModelRequest;

@interface MusicKit_SoftLinking_MPModelRequest : NSObject {
    MPModelRequest *_underlyingRequest;
}

@property (class, readonly, nonatomic) MusicKit_SoftLinking_MPModelRequest *defaultUnpersonalizedRequest;

@property (readonly, nonatomic) MPModelRequest *_underlyingRequest;

+ (id)_supportedPropertiesForModelObjectType:(long long)a0;
+ (id)_propertySetForRawProperties:(id)a0 relationships:(id)a1;
+ (id)_albumSupportedProperties;
+ (id)_artistSupportedProperties;
+ (id)_composerSupportedProperties;
+ (id)_genreSupportedProperties;
+ (id)_localFileAssetSupportedProperties;
+ (id)_movieSupportedProperties;
+ (id)_playlistSupportedProperties;
+ (id)_playlistEntrySupportedProperties;
+ (id)_recentlyAddedObjectSupportedProperties;
+ (id)_songSupportedProperties;
+ (id)_storeAssetSupportedProperties;
+ (id)_tvEpisodeSupportedProperties;
+ (id)_tvSeasonSupportedProperties;
+ (id)_tvShowSupportedProperties;

- (void).cxx_destruct;
- (id)_initWithUnderlyingRequest:(id)a0;

@end
