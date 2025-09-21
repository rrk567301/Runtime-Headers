@class AFBBufferBuilder;

@interface TRIFBTrialManagedAssetBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct TrialManagedAssetBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setPath:(id)a0;
- (void)setFileType:(unsigned char)a0;
- (void)setDownloadSize:(unsigned long long)a0;
- (void)setAssetId:(id)a0;
- (void)setAssetName:(id)a0;
- (void)setCloudKitMetadataWithAsset:(id)a0;
- (void)setCloudKitMetadataWithTreatment:(id)a0;
- (void)setHasOnDemandFlag:(char)a0;
- (void)setIsOnDemand:(char)a0;

@end
