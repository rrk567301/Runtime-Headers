@class LNDynamicOption;

@interface WFRemoteWidgetConfigurationDefaultLNOptionForParameterResponse : WFRemoteWidgetConfigurationResponse

@property (readonly, nonatomic) LNDynamicOption *defaultOption;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDefaultOption:(id)a0 error:(id)a1;

@end
