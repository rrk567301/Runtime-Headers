@class NSString;

@interface AuRA_ControlPriv : AuRA_ObjectPriv <AuRA_Control>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithControl:(struct weak_ptr<aura::Control> { struct Control *x0; struct __shared_weak_count *x1; })a0;

@end
