@class NSString, CKRecordID, CKRoughlyEquivalentProperties;

@interface CKUploadRequestMetadata : NSObject <CKRoughlyEquivalent, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) CKRecordID *repairZoneRecordID;
@property (readonly, nonatomic) long long databaseScope;
@property (readonly, copy, nonatomic) CKRecordID *recordID;
@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly, copy, nonatomic) NSString *fieldName;
@property (readonly, nonatomic) CKRoughlyEquivalentProperties *equivalencyProperties;

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)CKDescriptionPropertiesWithPublic:(char)a0 private:(char)a1 shouldExpand:(char)a2;
- (id)initWithRepairZoneRecordID:(id)a0 databaseScope:(long long)a1 recordID:(id)a2 recordType:(id)a3 fieldName:(id)a4;

@end
