@protocol NSSecureCoding;

@interface WFRemoteWidgetConfigurationDefaultValueForParameterResponse : WFRemoteWidgetConfigurationResponse

@property (readonly, nonatomic) id<NSSecureCoding> defaultValue;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDefaultValue:(id)a0 error:(id)a1;

@end
