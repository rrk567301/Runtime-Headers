@class NSURL, NSData, PFVideoComplement;

@interface PHCollectionShareAssetSource : NSObject

@property (readonly) long long sourceType;
@property (readonly) NSURL *fileURL;
@property (readonly) NSData *data;
@property (readonly) PFVideoComplement *videoComplementBundle;
@property (readonly) long long resourceType;

+ (id)collectionShareAssetSourceWithData:(id)a0 resourceType:(long long)a1;
+ (id)collectionShareAssetSourceWithFileURL:(id)a0 resourceType:(long long)a1;
+ (id)collectionShareAssetSourceWithVideoComplementBundle:(id)a0;

- (void).cxx_destruct;
- (id)initWithCollectionShareAssetSourceWithFileURL:(id)a0 data:(id)a1 videoComplementBundle:(id)a2 resourceType:(long long)a3 sourceType:(long long)a4;

@end
