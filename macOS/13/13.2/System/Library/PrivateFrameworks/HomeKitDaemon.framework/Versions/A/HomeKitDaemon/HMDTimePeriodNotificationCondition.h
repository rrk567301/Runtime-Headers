@class HMDTimePeriodElement;

@interface HMDTimePeriodNotificationCondition : HMDNotificationCondition <HMDBulletinNotificationRegistrationRemoteCoding>

@property (readonly) HMDTimePeriodElement *startElement;
@property (readonly) HMDTimePeriodElement *endElement;

+ (BOOL)supportsSecureCoding;
+ (id)type;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)attributeDescriptions;
- (id)serializedRegistrationForRemoteMessage;
- (id)initWithStartElement:(id)a0 endElement:(id)a1;
- (id)timePeriodElementFromDictionary:(id)a0;

@end
