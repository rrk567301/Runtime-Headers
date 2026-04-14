@class NSString;

@interface AuRA_SelectorControlPriv : AuRA_ControlPriv <AuRA_SelectorControl>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSelectorControl:(struct weak_ptr<aura::SelectorControl> { struct SelectorControl *x0; struct __shared_weak_count *x1; })a0;

@end
