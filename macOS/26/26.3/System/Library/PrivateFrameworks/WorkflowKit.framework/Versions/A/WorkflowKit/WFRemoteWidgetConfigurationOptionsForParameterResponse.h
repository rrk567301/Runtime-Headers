@class INObjectCollection;

@interface WFRemoteWidgetConfigurationOptionsForParameterResponse : WFRemoteWidgetConfigurationResponse

@property (readonly, nonatomic) INObjectCollection *options;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithOptions:(id)a0 error:(id)a1;

@end
