@class NSString;

@interface AuRA_StereoPanControlPriv : AuRA_ControlPriv <AuRA_StereoPanControl>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStereoPanControl:(struct weak_ptr<aura::StereoPanControl> { struct StereoPanControl *x0; struct __shared_weak_count *x1; })a0;

@end
