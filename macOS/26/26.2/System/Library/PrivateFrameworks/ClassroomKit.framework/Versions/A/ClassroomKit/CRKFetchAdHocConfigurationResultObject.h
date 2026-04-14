@class NSDictionary;

@interface CRKFetchAdHocConfigurationResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *configuration;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
