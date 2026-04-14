@class NSUUID, NSString;

@interface HMDHomeLockNotificationContextResolutionResult : HMFObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *userUUID;
@property (readonly, copy) NSString *label;
@property (readonly, copy) NSUUID *labelIdentifier;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUserUUID:(id)a0 label:(id)a1 labelIdentifier:(id)a2;

@end
