@interface _NSTargetActionSliderAccessoryBehavior : NSSliderAccessoryBehavior

@property (readonly, weak) id target;
@property (readonly) SEL action;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)handleAction:(id)a0;

@end
