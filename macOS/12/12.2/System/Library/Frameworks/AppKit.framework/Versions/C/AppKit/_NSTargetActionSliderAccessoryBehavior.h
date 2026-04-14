@interface _NSTargetActionSliderAccessoryBehavior : NSSliderAccessoryBehavior

@property (readonly, weak) id target;
@property (readonly) SEL action;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)handleAction:(id)a0;

@end
