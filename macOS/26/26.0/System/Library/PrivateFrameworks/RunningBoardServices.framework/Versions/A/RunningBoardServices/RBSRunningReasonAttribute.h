@interface RBSRunningReasonAttribute : RBSAttribute

@property (readonly, nonatomic) unsigned long long runningReason;

+ (id)withReason:(unsigned long long)a0;

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)description;
- (id)initWithRBSXPCCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
