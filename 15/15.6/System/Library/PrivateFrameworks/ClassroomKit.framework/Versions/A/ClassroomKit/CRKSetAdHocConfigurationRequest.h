@class NSDictionary;

@interface CRKSetAdHocConfigurationRequest : CATTaskRequest

@property (copy, nonatomic) NSDictionary *configuration;
@property (nonatomic) char merge;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
