@class NSData, NSURL, PHAssetResource;

@interface PHMediaResourceResult : PHCompositeMediaResult {
    PHAssetResource *_assetResource;
}

@property (retain, nonatomic) NSData *assetResourceData;
@property (copy, nonatomic) NSURL *assetResourceFileURL;

- (id)uniformTypeIdentifier;
- (id)videoURL;
- (BOOL)containsValidData;
- (id)exifOrientation;
- (id)imageURL;
- (id)allowedInfoKeys;
- (id)sanitizedInfoDictionary;
- (void).cxx_destruct;
- (id)mediaMetadata;
- (id)adjustmentData;
- (id)adjustmentSecondaryDataURL;
- (id)initWithRequestID:(int)a0 assetResource:(id)a1;

@end
