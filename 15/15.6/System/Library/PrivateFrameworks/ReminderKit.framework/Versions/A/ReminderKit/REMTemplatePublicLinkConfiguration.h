@interface REMTemplatePublicLinkConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char shouldIncludeHashtags;
@property (readonly, nonatomic) char shouldIncludeAlarmTriggersBasedOnDateOrTimeInterval;
@property (readonly, nonatomic) char shouldIncludeAlarmTriggersBasedOnLocationOrVehicle;
@property (readonly, nonatomic) char shouldIncludeContactsHandleData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithShouldIncludeHashtags:(char)a0 shouldIncludeAlarmTriggersBasedOnDateOrTimeInterval:(char)a1 shouldIncludeAlarmTriggersBasedOnLocationOrVehicle:(char)a2;

@end
