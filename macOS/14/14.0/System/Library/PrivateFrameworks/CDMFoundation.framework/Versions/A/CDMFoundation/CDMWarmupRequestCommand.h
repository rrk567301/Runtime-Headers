@class CDMDynamicConfig;

@interface CDMWarmupRequestCommand : CDMServiceGraphCommand

@property (readonly, nonatomic) CDMDynamicConfig *dynamicConfig;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDynamicConfig:(id)a0;

@end
