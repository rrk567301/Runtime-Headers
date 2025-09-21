@protocol NSSecureCoding;

@interface WFRemoteWidgetConfigurationDefaultValueForParameterResponse : WFRemoteWidgetConfigurationResponse

@property (readonly, nonatomic) id<NSSecureCoding> defaultValue;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDefaultValue:(id)a0 error:(id)a1;

@end
