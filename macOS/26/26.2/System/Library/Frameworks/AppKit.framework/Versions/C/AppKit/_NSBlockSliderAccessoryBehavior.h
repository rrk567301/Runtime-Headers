@interface _NSBlockSliderAccessoryBehavior : NSSliderAccessoryBehavior

@property (readonly, copy) id /* block */ handler;

- (id)initWithHandler:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)handleAction:(id)a0;

@end
