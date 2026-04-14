@class MPModelRequest;

@interface MusicKit_SoftLinking_MPModelRequest : NSObject {
    MPModelRequest *_underlyingRequest;
}

@property (class, readonly, nonatomic) MusicKit_SoftLinking_MPModelRequest *defaultUnpersonalizedRequest;

@property (readonly, nonatomic) MPModelRequest *_underlyingRequest;

+ (id)_albumSupportedProperties;
+ (id)_songSupportedProperties;
+ (id)_playlistSupportedProperties;
+ (id)_artistSupportedProperties;
+ (id)_genreSupportedProperties;
+ (id)_playlistEntrySupportedProperties;
+ (id)_recentlyAddedObjectSupportedProperties;
+ (id)_supportedPropertiesForModelType:(long long)a0;

- (void).cxx_destruct;
- (id)_initWithUnderlyingRequest:(id)a0;

@end
