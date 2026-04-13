@class NSString;

@interface admGraphVolumeDelegate : NSObject <dspd_GraphVolumeDelegate> {
    struct shared_ptr<caulk::reactor<aura::adm::GraphVolume *>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } reactor_;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
