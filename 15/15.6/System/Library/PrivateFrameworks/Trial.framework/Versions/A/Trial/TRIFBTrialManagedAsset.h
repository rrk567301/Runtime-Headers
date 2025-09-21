@class NSString, TRIFBCloudKitTreatmentRecordAsset, NSData, TRIFBCloudKitAssetRecordAsset, AFBBufRef;

@interface TRIFBTrialManagedAsset : NSObject <AFBBufferReferencing, NSCopying> {
    AFBBufRef *_br;
    const struct TrialManagedAsset { unsigned char x0[1]; } *_ptr;
}

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) const char *pathAsCString;
@property (readonly, nonatomic) NSData *pathAsData;
@property (readonly, nonatomic) char hasFileType;
@property (readonly, nonatomic) unsigned char fileType;
@property (readonly, nonatomic) NSString *assetId;
@property (readonly, nonatomic) const char *assetIdAsCString;
@property (readonly, nonatomic) NSData *assetIdAsData;
@property (readonly, nonatomic) unsigned char cloudKitMetadataType;
@property (readonly, nonatomic) TRIFBCloudKitTreatmentRecordAsset *cloudKitMetadataAsTreatment;
@property (readonly, nonatomic) TRIFBCloudKitAssetRecordAsset *cloudKitMetadataAsAsset;
@property (readonly, nonatomic) char hasIsOnDemand;
@property (readonly, nonatomic) char isOnDemand;
@property (readonly, nonatomic) char hasDownloadSize;
@property (readonly, nonatomic) unsigned long long downloadSize;
@property (readonly, nonatomic) NSString *assetName;
@property (readonly, nonatomic) const char *assetNameAsCString;
@property (readonly, nonatomic) NSData *assetNameAsData;
@property (readonly, nonatomic) char hasHasOnDemandFlag;
@property (readonly, nonatomic) char hasOnDemandFlag;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initVerifiedRootObjectFromData:(id)a0;
- (id)deepCopyUsingBufferBuilder:(id)a0;
- (id)deepCopyUsingBufferBuilder:(id)a0 changes:(id)a1;
- (id)initVerifiedRootObjectFromData:(id)a0 requireUTF8:(char)a1;
- (id)initVerifiedRootObjectFromData:(id)a0 requireUTF8:(char)a1 maxDepth:(unsigned int)a2 maxTables:(unsigned int)a3;
- (id)initWithBufRef:(id)a0 cppPointer:(const struct TrialManagedAsset { unsigned char x0[1]; } *)a1;
- (id)initWithBufRef:(id)a0 rawPointer:(const void *)a1;
- (char)verifyUTF8Fields;

@end
