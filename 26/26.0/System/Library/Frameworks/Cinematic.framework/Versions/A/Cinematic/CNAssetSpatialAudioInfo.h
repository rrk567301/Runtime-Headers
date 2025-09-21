@class AVAssetTrack, NSData;

@interface CNAssetSpatialAudioInfo : NSObject {
    AVAssetTrack *_spatialAudioTrack;
    NSData *_metadataBlob;
}

@property (class, readonly) BOOL isSupported;

+ (void)checkIfContainsSpatialAudio:(id)a0 completionHandler:(id /* block */)a1;
+ (void)findAssociatedRemixMetadata:(id)a0 completionHandler:(id /* block */)a1;
+ (void)loadFromAsset:(id)a0 completionHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)assetReaderOutputSettingsForContentType:(long long)a0;
- (id)assetWriterInputSettingsForContentType:(long long)a0;
- (id)audioMixWithEffectIntensity:(float)a0 renderingStyle:(long long)a1;
- (float)defaultEffectIntensity;
- (long long)defaultRenderingStyle;
- (id)defaultSpatialAudioTrack;
- (id)initWithSpatialAudioTrack:(id)a0 metadataBlob:(id)a1;
- (id)spatialAudioMixMetadata;

@end
