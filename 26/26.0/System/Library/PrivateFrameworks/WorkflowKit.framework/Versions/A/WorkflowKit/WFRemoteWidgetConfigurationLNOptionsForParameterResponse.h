@class LNDynamicOptionsResult;

@interface WFRemoteWidgetConfigurationLNOptionsForParameterResponse : WFRemoteWidgetConfigurationResponse

@property (readonly, nonatomic) LNDynamicOptionsResult *result;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
