@class NSURL, NWPathEvaluator;

@interface WFReachabilityConfigurationResponse : WFResponse <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSURL *reachabilityHostURL;
@property (readonly, nonatomic) NWPathEvaluator *pathEvaluator;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
