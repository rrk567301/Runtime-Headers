@class CKRecordID;

@interface HMBShareUserID : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) CKRecordID *userRecordID;

+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)logIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithUserRecordID:(id)a0;

@end
