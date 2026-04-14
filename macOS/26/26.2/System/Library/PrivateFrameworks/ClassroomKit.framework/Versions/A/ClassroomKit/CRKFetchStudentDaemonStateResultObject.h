@class NSDictionary;

@interface CRKFetchStudentDaemonStateResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *stateDictionary;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
