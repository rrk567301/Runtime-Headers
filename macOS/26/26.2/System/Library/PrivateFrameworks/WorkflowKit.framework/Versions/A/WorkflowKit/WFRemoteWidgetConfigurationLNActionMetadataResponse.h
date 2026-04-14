@class LNActionMetadata;

@interface WFRemoteWidgetConfigurationLNActionMetadataResponse : WFRemoteWidgetConfigurationResponse

@property (readonly, nonatomic) LNActionMetadata *metadata;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMetadata:(id)a0 error:(id)a1;

@end
