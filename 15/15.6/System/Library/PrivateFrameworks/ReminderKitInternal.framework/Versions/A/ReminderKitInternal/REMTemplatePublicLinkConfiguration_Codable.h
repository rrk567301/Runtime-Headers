@interface REMTemplatePublicLinkConfiguration_Codable : REMTemplatePublicLinkConfiguration

@property (class, nonatomic, readonly) char supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithShouldIncludeHashtags:(char)a0 shouldIncludeAlarmTriggersBasedOnDateOrTimeInterval:(char)a1 shouldIncludeAlarmTriggersBasedOnLocationOrVehicle:(char)a2;

@end
