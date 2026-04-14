@class NSObject, NSString, FI_TRunAfterHelper, NSMutableArray, FI_TNotificationCenterObserverGlue;

@interface FI_TAirDropProgressControllerRegistry : NSObject <TCoalescingNodeObserverProtocol> {
    NSMutableArray *_controllers;
    struct vector<TNSWeakPtr<NSObject<TAirDropProgressControllerDelegate>>, std::allocator<TNSWeakPtr<NSObject<TAirDropProgressControllerDelegate>>>> { void *__begin_; void *__end_; void *__cap_; } _weakDelegates;
    struct shared_ptr<TCoalescingNodeObserverCocoaBridge> { struct TCoalescingNodeObserverCocoaBridge *__ptr_; struct __shared_weak_count *__cntrl_; } _nodeObserver;
    BOOL _isUserInAirDrop;
    struct TNSWeakPtr<FI_TRunAfterHelper> { FI_TRunAfterHelper *fWeakObject; } _updateControllersToken;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _userEnteredOrExitedAirDropObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _airDropAvailableStateChangedObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controllerForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
+ (void)enumerateDelegates:(const void *)a0;
+ (id)findControllerForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
+ (id)getOrCreateRegistry;
+ (BOOL)isPopoverShown;
+ (void)registerProgressControllerDelegate:(id)a0;
+ (void)removeAllControllers;
+ (void)removeController:(id)a0;
+ (void)tearDownIfNeeded;
+ (void)unregisterProgressControllerDelegate:(id)a0;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)aboutToTearDown;
- (void)updateControllers;
- (void)callUpdateControllersAfterDelay;
- (void)airDropAvailabilityChanged:(id)a0;
- (void)coalescingNodeObserver:(void *)a0 nodesAdded:(const void *)a1 toObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (id)findControllerForNodeLocked:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)setIsUserInAirDrop:(BOOL)a0;
- (void)userEnteredOrExitedAirDrop:(id)a0;

@end
