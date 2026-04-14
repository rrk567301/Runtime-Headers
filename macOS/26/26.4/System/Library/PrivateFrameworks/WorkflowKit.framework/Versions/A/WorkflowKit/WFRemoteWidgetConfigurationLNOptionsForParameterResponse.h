@class LNDynamicOptionsResult;

@interface WFRemoteWidgetConfigurationLNOptionsForParameterResponse : WFRemoteWidgetConfigurationResponse

@property (readonly, nonatomic) LNDynamicOptionsResult *result;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithResult:(id)a0 error:(id)a1;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
