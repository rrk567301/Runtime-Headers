@class NSData, NSURL, PHAssetResource;

@interface PHMediaResourceResult : PHCompositeMediaResult {
    PHAssetResource *_assetResource;
}

@property (retain, nonatomic) NSData *assetResourceData;
@property (copy, nonatomic) NSURL *assetResourceFileURL;

- (id)imageURL;
- (id)videoURL;
- (id)uniformTypeIdentifier;
- (id)sanitizedInfoDictionary;
- (id)exifOrientation;
- (void).cxx_destruct;
- (BOOL)containsValidData;
- (id)allowedInfoKeys;
- (id)mediaMetadata;
- (id)adjustmentData;
- (id)adjustmentSecondaryDataURL;
- (id)initWithRequestID:(int)a0 assetResource:(id)a1;

@end
