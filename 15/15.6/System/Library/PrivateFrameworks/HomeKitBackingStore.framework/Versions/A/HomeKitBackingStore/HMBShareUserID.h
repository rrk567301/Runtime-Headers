@class CKRecordID;

@interface HMBShareUserID : HMFObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) CKRecordID *userRecordID;

+ (id)logCategory;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUserRecordID:(id)a0;
- (id)logIdentifier;
- (id)attributeDescriptions;

@end
