@class NSString;

@interface DMFFetchConfigurationSourceSyncTokenRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *configurationSource;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
