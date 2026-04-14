@class CLEmergencyLocationSelectorConfig, NSBundle, CLEmergencyLocationSelector;

@interface E911LocationSelector : NSObject <CLEmergencyLocationSelectorDelegate> {
    NSBundle *_bundle;
    CLEmergencyLocationSelector *_location;
    CLEmergencyLocationSelectorConfig *_config;
    struct weak_ptr<ImsLocationSelectorDelegate> { struct ImsLocationSelectorDelegate *__ptr_; struct __shared_weak_count *__cntrl_; } _delegate;
    unsigned int _confidence;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;
- (void)locationSelectorDidSelectLocation:(id)a0;
- (id)initWithDelegate:(struct weak_ptr<ImsLocationSelectorDelegate> { struct ImsLocationSelectorDelegate *x0; struct __shared_weak_count *x1; })a0 sipStack:(struct shared_ptr<SipStack> { struct SipStack *x0; struct __shared_weak_count *x1; })a1 updateMode:(int)a2 dispatchQueue:(struct queue { struct object { struct dispatch_object_s *x0; } x0; })a3;

@end
