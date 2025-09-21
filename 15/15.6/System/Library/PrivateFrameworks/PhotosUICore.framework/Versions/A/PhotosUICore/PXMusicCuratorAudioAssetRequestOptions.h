@class NSDictionary;

@interface PXMusicCuratorAudioAssetRequestOptions : NSObject

@property (nonatomic) char forceMetadataRefetch;
@property (readonly, nonatomic) NSDictionary *requestOptions;

@end
