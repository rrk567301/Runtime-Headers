@class HMDEndpointBulletinNotificationRegistration, HMDBulletinNotificationRegistrationSource;

@interface HMDEndpointBulletinNotificationRegistrationRemote : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) HMDEndpointBulletinNotificationRegistration *registration;
@property (readonly, copy) HMDBulletinNotificationRegistrationSource *source;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEndpointBulletinNotificationRegistration:(id)a0 source:(id)a1;

@end
