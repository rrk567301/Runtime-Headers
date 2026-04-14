@class NSUUID;

@interface HMDHomeManagerHomeHandle : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *backingStoreUUID;
@property (readonly) NSUUID *homeUUID;

- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBackingStoreUUID:(id)a0 homeUUID:(id)a1;

@end
