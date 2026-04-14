@class NSString, CKRecordID, CKRoughlyEquivalentProperties;

@interface CKUploadRequestMetadata : NSObject <CKRoughlyEquivalent, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CKRecordID *repairZoneRecordID;
@property (readonly, nonatomic) long long databaseScope;
@property (readonly, copy, nonatomic) CKRecordID *recordID;
@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly, copy, nonatomic) NSString *fieldName;
@property (readonly, nonatomic) CKRoughlyEquivalentProperties *equivalencyProperties;

+ (void)initialize;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRepairZoneRecordID:(id)a0 databaseScope:(long long)a1 recordID:(id)a2 recordType:(id)a3 fieldName:(id)a4;

@end
