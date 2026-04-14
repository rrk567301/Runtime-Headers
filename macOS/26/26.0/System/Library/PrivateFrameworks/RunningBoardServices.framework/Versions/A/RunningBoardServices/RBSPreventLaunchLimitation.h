@class RBSProcessPredicate;

@interface RBSPreventLaunchLimitation : RBSLimitation

@property (readonly, nonatomic) RBSProcessPredicate *predicate;
@property (readonly, nonatomic) RBSProcessPredicate *allow;

+ (id)limitationWithPredicate:(id)a0;
+ (id)limitationWithPredicate:(id)a0 andException:(id)a1;

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)description;
- (id)initWithRBSXPCCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
