@class NSData, NSURL, PHAssetResource;

@interface PHMediaResourceResult : PHCompositeMediaResult {
    PHAssetResource *_assetResource;
}

@property (retain, nonatomic) NSData *assetResourceData;
@property (copy, nonatomic) NSURL *assetResourceFileURL;

- (id)videoURL;
- (id)uniformTypeIdentifier;
- (id)allowedInfoKeys;
- (id)imageURL;
- (id)sanitizedInfoDictionary;
- (void).cxx_destruct;
- (BOOL)containsValidData;
- (id)exifOrientation;
- (id)mediaMetadata;
- (id)adjustmentData;
- (id)adjustmentSecondaryDataURL;
- (id)initWithRequestID:(int)a0 assetResource:(id)a1;

@end
