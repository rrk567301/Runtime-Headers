@class CKRecordID;

@interface HMBShareUserID : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) CKRecordID *userRecordID;

+ (id)logCategory;

- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)logIdentifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUserRecordID:(id)a0;

@end
