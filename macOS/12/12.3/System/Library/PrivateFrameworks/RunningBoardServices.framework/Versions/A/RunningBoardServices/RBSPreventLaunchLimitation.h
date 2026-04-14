@class RBSProcessPredicate;

@interface RBSPreventLaunchLimitation : RBSLimitation

@property (readonly, nonatomic) RBSProcessPredicate *predicate;

+ (id)limitationWithPredicate:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;

@end
