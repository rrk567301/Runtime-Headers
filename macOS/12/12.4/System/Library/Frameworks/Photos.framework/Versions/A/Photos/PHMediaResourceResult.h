@class NSData, NSURL, PHAssetResource;

@interface PHMediaResourceResult : PHCompositeMediaResult {
    PHAssetResource *_assetResource;
}

@property (retain, nonatomic) NSData *assetResourceData;
@property (copy, nonatomic) NSURL *assetResourceFileURL;

- (void).cxx_destruct;
- (id)exifOrientation;
- (id)imageURL;
- (id)uniformTypeIdentifier;
- (id)mediaMetadata;
- (BOOL)containsValidData;
- (id)videoURL;
- (id)adjustmentData;
- (id)initWithRequestID:(int)a0 assetResource:(id)a1;

@end
