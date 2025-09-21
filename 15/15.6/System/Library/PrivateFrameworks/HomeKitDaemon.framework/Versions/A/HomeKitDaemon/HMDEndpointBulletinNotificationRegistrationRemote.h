@class HMDEndpointBulletinNotificationRegistration, HMDBulletinNotificationRegistrationSource;

@interface HMDEndpointBulletinNotificationRegistrationRemote : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) HMDEndpointBulletinNotificationRegistration *registration;
@property (readonly, copy) HMDBulletinNotificationRegistrationSource *source;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributeDescriptions;
- (id)initWithEndpointBulletinNotificationRegistration:(id)a0 source:(id)a1;

@end
