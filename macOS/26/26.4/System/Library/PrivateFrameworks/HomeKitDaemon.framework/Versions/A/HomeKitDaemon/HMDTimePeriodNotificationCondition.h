@class HMDTimePeriodElement;

@interface HMDTimePeriodNotificationCondition : HMDNotificationCondition <HMDBulletinNotificationRegistrationRemoteCoding>

@property (readonly) HMDTimePeriodElement *startElement;
@property (readonly) HMDTimePeriodElement *endElement;

+ (BOOL)supportsSecureCoding;
+ (id)type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithStartElement:(id)a0 endElement:(id)a1;
- (id)serializedRegistrationForRemoteMessage;
- (id)timePeriodElementFromDictionary:(id)a0;

@end
