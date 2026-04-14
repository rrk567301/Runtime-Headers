@class NSString;

@interface AuRA_SliderControlPriv : AuRA_ControlPriv <AuRA_SliderControl>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSliderControl:(struct weak_ptr<aura::SliderControl> { struct SliderControl *x0; struct __shared_weak_count *x1; })a0;

@end
