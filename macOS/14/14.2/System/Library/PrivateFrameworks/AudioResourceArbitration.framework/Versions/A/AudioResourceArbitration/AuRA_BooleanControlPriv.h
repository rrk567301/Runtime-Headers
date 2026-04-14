@class NSString;

@interface AuRA_BooleanControlPriv : AuRA_ControlPriv <AuRA_BooleanControl>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBooleanControl:(struct weak_ptr<aura::BooleanControl> { struct BooleanControl *x0; struct __shared_weak_count *x1; })a0;

@end
