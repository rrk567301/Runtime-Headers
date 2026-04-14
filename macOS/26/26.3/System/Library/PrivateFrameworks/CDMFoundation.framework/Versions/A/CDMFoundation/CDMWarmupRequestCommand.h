@class NLXSchemaNLXClientEventMetadata, CDMDynamicConfig;

@interface CDMWarmupRequestCommand : CDMServiceGraphCommand

@property (readonly, nonatomic) CDMDynamicConfig *dynamicConfig;
@property (readonly, nonatomic) NLXSchemaNLXClientEventMetadata *selfMetadata;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDynamicConfig:(id)a0;
- (id)initWithDynamicConfig:(id)a0 selfMetadata:(id)a1;

@end
