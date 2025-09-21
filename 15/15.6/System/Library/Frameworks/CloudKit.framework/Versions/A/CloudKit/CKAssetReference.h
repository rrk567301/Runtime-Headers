@class NSString, CKRecordID, NSData;

@interface CKAssetReference : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) long long databaseScope;
@property (readonly, copy, nonatomic) NSString *fieldName;
@property (readonly, copy, nonatomic) NSData *fileSignature;
@property (nonatomic) char isPackageMember;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)CKDescriptionPropertiesWithPublic:(char)a0 private:(char)a1 shouldExpand:(char)a2;
- (id)initWithExistingRecordID:(id)a0 databaseScope:(long long)a1 fieldName:(id)a2 fileSignature:(id)a3;

@end
