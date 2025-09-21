@class LNActionMetadata;

@interface WFRemoteWidgetConfigurationLNActionMetadataResponse : WFRemoteWidgetConfigurationResponse

@property (readonly, nonatomic) LNActionMetadata *metadata;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0 error:(id)a1;

@end
