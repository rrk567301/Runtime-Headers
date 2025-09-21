@class HMDBulletinNotificationRegistrationSource, HMDMatterBulletinNotificationRegistration;

@interface HMDMatterBulletinNotificationRegistrationRemote : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) HMDMatterBulletinNotificationRegistration *registration;
@property (readonly, copy) HMDBulletinNotificationRegistrationSource *source;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributeDescriptions;
- (id)initWithMatterBulletinNotificationRegistration:(id)a0 source:(id)a1;

@end
