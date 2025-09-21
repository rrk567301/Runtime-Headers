@class NSString, NSDateComponents;

@interface HMDSunriseSunsetTimePeriodElement : HMDTimePeriodElement <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSString *significantEvent;
@property (readonly, copy) NSDateComponents *offset;

+ (id)type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)attributeDescriptions;
- (id)initWithSignificantEvent:(id)a0 offset:(id)a1;
- (id)serializedRegistrationForRemoteMessage;

@end
