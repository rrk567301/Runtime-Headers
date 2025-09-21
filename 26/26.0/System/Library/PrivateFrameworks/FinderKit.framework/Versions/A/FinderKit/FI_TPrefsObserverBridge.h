@class NSString, NSObject, FI_TNotificationCenterObserverGlue;

@interface FI_TPrefsObserverBridge : NSObject <TMarkTornDown> {
    struct IPrefsObserver { void /* function */ **x0; id x1; } *_observer;
    struct map<TString, TNotificationCenterObserver, std::less<TString>, std::allocator<std::pair<const TString, TNotificationCenterObserver>>> { struct __tree<std::__value_type<TString, TNotificationCenterObserver>, std::__map_value_compare<TString, std::__value_type<TString, TNotificationCenterObserver>, std::less<TString>>, std::allocator<std::__value_type<TString, TNotificationCenterObserver>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _globalKeysToObserverMap;
    struct map<UDefaults::RegistryID, TNotificationCenterObserver, std::less<UDefaults::RegistryID>, std::allocator<std::pair<const UDefaults::RegistryID, TNotificationCenterObserver>>> { struct __tree<std::__value_type<UDefaults::RegistryID, TNotificationCenterObserver>, std::__map_value_compare<UDefaults::RegistryID, std::__value_type<UDefaults::RegistryID, TNotificationCenterObserver>, std::less<UDefaults::RegistryID>>, std::allocator<std::__value_type<UDefaults::RegistryID, TNotificationCenterObserver>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _regIDsToObserverMap;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _finderPrefsResetObserver;
}

@property (getter=isTornDown) BOOL tornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithObserver:(struct IPrefsObserver { void /* function */ **x0; id x1; } *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)aboutToTearDown;
- (void)stopObservingGlobalPrefChanges:(const void *)a0;
- (void)finderPrefChanged:(id)a0;
- (void)globalPrefChanged:(id)a0;
- (void)startObservingFinderPrefsResetNotification;
- (void)startObservingGlobalPrefChanges:(const void *)a0;
- (void)startObservingRegIDChanges:(int)a0;
- (void)stopObservingAllPrefsChanges;
- (void)stopObservingFinderPrefsResetNotification;
- (void)stopObservingRegIDChanges:(int)a0;

@end
