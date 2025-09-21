@class NSString, NSData, AFBBufRef;

@interface TRIFBCloudKitTreatmentRecordAsset : NSObject <AFBBufferReferencing, NSCopying> {
    AFBBufRef *_br;
    const struct CloudKitTreatmentRecordAsset { unsigned char x0[1]; } *_ptr;
}

@property (readonly, nonatomic) char hasContainer;
@property (readonly, nonatomic) unsigned char container;
@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) const char *treatmentIdAsCString;
@property (readonly, nonatomic) NSData *treatmentIdAsData;
@property (readonly, nonatomic) char hasAssetIndex;
@property (readonly, nonatomic) unsigned int assetIndex;
@property (readonly, nonatomic) char hasHasCkIndex;
@property (readonly, nonatomic) char hasCkIndex;

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
- (id)initWithBufRef:(id)a0 cppPointer:(const struct CloudKitTreatmentRecordAsset { unsigned char x0[1]; } *)a1;
- (id)initWithBufRef:(id)a0 rawPointer:(const void *)a1;
- (char)verifyUTF8Fields;

@end
