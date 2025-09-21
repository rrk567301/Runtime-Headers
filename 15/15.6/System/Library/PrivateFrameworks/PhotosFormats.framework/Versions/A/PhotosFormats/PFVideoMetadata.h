@class NSString, NSDictionary, AVAsset;

@interface PFVideoMetadata : NSObject {
    AVAsset *_asset;
}

@property (readonly) char isSpatial;
@property (readonly) char isHDR;
@property (readonly) char isPlayable;
@property (readonly) char isDecodable;
@property (readonly) NSString *firstVideoTrackFormatDebugDescription;
@property (readonly) NSDictionary *outOfBandHints;

+ (id)arrayByRemovingMetadataItemOfType:(unsigned char)a0 fromArray:(id)a1 error:(id *)a2;
+ (id)firstVideoTrackFormatDebugDescriptionForAsset:(id)a0;
+ (char)hasValidMetadataForLoopingVideoAsset:(id)a0;
+ (void)loadMetadataForAsset:(id)a0 completion:(id /* block */)a1;
+ (id)metadataItemValueFromAsset:(id)a0 withKey:(id)a1 keySpace:(id)a2;
+ (id)outOfBandHintsForVideoAsset:(id)a0;
+ (id)quickTimeMetadataItemValueFromAsset:(id)a0 withKey:(id)a1;
+ (char)readMetadataType:(unsigned char)a0 fromAVAsset:(id)a1 value:(id *)a2 error:(id *)a3;
+ (char)readMetadataType:(unsigned char)a0 fromFileURL:(id)a1 value:(id *)a2 error:(id *)a3;
+ (char)videoAssetIsDecodable:(id)a0;
+ (char)videoAssetIsHighDynamicRange:(id)a0;
+ (char)videoAssetIsMonoski:(id)a0;
+ (char)videoAssetIsPlayable:(id)a0;
+ (char)videoAssetIsSpatial:(id)a0;
+ (unsigned int)videoCodecFourCharCodeNumberForAVAsset:(id)a0;
+ (char)videoTrackFormatDescriptionContainsPortraitData:(struct opaqueCMFormatDescription { } *)a0;
+ (char)videoTrackFormatDescriptionIsHDR10:(struct opaqueCMFormatDescription { } *)a0;
+ (char)videoTrackFormatDescriptionIsHighDynamicRange:(struct opaqueCMFormatDescription { } *)a0;
+ (char)videoTrackFormatDescriptionIsProResLOG:(struct opaqueCMFormatDescription { } *)a0;
+ (char)videoTrackIsSpatial:(id)a0;

- (void).cxx_destruct;

@end
