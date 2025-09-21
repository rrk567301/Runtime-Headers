@interface SCNActionCustom : SCNAction

+ (char)supportsSecureCoding;
+ (id)customActionWithDuration:(double)a0 actionBlock:(id /* block */)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isCustom;
- (id)reversedAction;

@end
