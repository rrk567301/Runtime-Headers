@class NSDictionary;

@interface DMFFetchAppInfoResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSDictionary *managedApps;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)addAttributes:(id)a0 forApp:(id)a1;

@end
