@class NSString;

@interface DMFFetchConfigurationSourceSyncTokenResultObject : CATTaskResultObject

@property (copy, nonatomic) NSString *syncToken;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
