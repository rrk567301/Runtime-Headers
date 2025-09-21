@class NSData;

@interface CKAssetUploadRequestMetadata : CKUploadRequestMetadata <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *referenceSignature;
@property (readonly, nonatomic) long long listIndex;
@property (readonly, copy, nonatomic) NSData *fileSignature;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)CKDescriptionPropertiesWithPublic:(char)a0 private:(char)a1 shouldExpand:(char)a2;
- (id)initWithRepairZoneRecordID:(id)a0 databaseScope:(long long)a1 recordID:(id)a2 recordType:(id)a3 fieldName:(id)a4;
- (id)initWithRepairZoneRecordID:(id)a0 databaseScope:(long long)a1 recordID:(id)a2 recordType:(id)a3 fieldName:(id)a4 fileSignature:(id)a5 referenceSignature:(id)a6;
- (id)initWithRepairZoneRecordID:(id)a0 databaseScope:(long long)a1 recordID:(id)a2 recordType:(id)a3 fieldName:(id)a4 fileSignature:(id)a5 referenceSignature:(id)a6 listIndex:(long long)a7;

@end
