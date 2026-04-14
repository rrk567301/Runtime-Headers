@class NSData, NSURL, PHAssetResource;

@interface PHMediaResourceResult : PHCompositeMediaResult {
    PHAssetResource *_assetResource;
}

@property (retain, nonatomic) NSData *assetResourceData;
@property (copy, nonatomic) NSURL *assetResourceFileURL;

- (id)uniformTypeIdentifier;
- (id)sanitizedInfoDictionary;
- (id)imageURL;
- (id)videoURL;
- (void).cxx_destruct;
- (id)exifOrientation;
- (id)allowedInfoKeys;
- (BOOL)containsValidData;
- (id)mediaMetadata;
- (id)adjustmentData;
- (id)adjustmentSecondaryDataURL;
- (id)initWithRequestID:(int)a0 assetResource:(id)a1;

@end
