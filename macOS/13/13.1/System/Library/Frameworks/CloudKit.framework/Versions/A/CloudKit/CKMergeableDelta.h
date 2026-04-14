@class NSData, NSString, CKAsset, CKMergeableValueID, NSURL, CKDSStorage, CKMergeableDeltaID, CKMergeableDeltaMetadata;

@interface CKMergeableDelta : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) CKDSStorage *atomBatchStorage;
@property (copy, nonatomic) CKMergeableValueID *valueID;
@property (retain, nonatomic) CKMergeableDeltaMetadata *metadata;
@property (readonly, copy, nonatomic) CKMergeableDeltaID *deltaID;
@property (copy, nonatomic) NSData *_data;
@property (retain, nonatomic) CKAsset *asset;
@property (nonatomic) long long encryptMetadataTernary;
@property (retain, nonatomic) NSData *encryptedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)suggestedDeltaSizeForContainer:(id)a0;
+ (unsigned long long)maxInlineDeltaSizeForContainer:(id)a0;
+ (unsigned long long)maxInlineDeltaSize;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initWithValueID:(id)a0 metadata:(id)a1;
- (id)initWithValueID:(id)a0 metadata:(id)a1 data:(id)a2;
- (id)initWithValueID:(id)a0 metadata:(id)a1 encryptedData:(id)a2;
- (id)initWithValueID:(id)a0 metadata:(id)a1 asset:(id)a2;
- (id)initWithValueID:(id)a0 metadata:(id)a1 fileURL:(id)a2;
- (id)initWithData:(id)a0 metadata:(id)a1;
- (id)initWithFileURL:(id)a0 metadata:(id)a1;
- (id)dataBackedDeltaWithError:(id *)a0;
- (id)dataWithError:(id *)a0;
- (BOOL)contentSize:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)protobufSize:(unsigned long long *)a0 error:(id *)a1;
- (void)populateAssetIfNecessaryWithMaxInlineSize:(unsigned long long)a0;
- (void)unpopulateAsset;
- (id)initWithAtomBatch:(id)a0 error:(id *)a1;

@end
