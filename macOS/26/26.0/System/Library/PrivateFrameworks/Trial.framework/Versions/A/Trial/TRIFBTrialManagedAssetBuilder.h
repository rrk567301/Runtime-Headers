@class AFBBufferBuilder;

@interface TRIFBTrialManagedAssetBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct TrialManagedAssetBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)setAssetName:(id)a0;
- (void)setPath:(id)a0;
- (void)dealloc;
- (id)init;
- (void)setDownloadSize:(unsigned long long)a0;
- (void)setFileType:(unsigned char)a0;
- (void).cxx_destruct;
- (void)setAssetId:(id)a0;
- (void)setCloudKitMetadataWithAsset:(id)a0;
- (void)setCloudKitMetadataWithTreatment:(id)a0;
- (void)setHasOnDemandFlag:(BOOL)a0;
- (void)setIsOnDemand:(BOOL)a0;

@end
