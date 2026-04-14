@class NSDictionary;

@interface DMFFetchAppInfoResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSDictionary *managedApps;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addAttributes:(id)a0 forApp:(id)a1;

@end
