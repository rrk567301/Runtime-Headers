@interface SCNActionCustom : SCNAction

+ (BOOL)supportsSecureCoding;
+ (id)customActionWithDuration:(double)a0 actionBlock:(id /* block */)a1;

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isCustom;
- (id)reversedAction;

@end
