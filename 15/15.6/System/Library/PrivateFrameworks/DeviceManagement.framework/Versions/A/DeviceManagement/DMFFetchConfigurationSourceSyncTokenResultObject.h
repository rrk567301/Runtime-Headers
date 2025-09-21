@class NSString;

@interface DMFFetchConfigurationSourceSyncTokenResultObject : CATTaskResultObject

@property (copy, nonatomic) NSString *syncToken;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
