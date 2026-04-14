@class AVAudioSession, ATAudioSessionPropertyManager;

@interface ATAudioSessionClientImpl : NSObject {
    AVAudioSession *_weakSession;
    AVAudioSession *_strongSession;
    ATAudioSessionPropertyManager *_propertyManager;
    struct unique_ptr<AudioSessionPropertyListeners, std::default_delete<AudioSessionPropertyListeners>> { struct AudioSessionPropertyListeners *__ptr_; } _propertyListeners;
    struct map<std::string, std::shared_ptr<OldNotificationCenterObserver>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<OldNotificationCenterObserver>>>> { struct __tree<std::__value_type<std::string, std::shared_ptr<OldNotificationCenterObserver>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<OldNotificationCenterObserver>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::shared_ptr<OldNotificationCenterObserver>>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _oldNotificationCenterObservers;
    struct map<std::string, std::shared_ptr<NewNotificationCenterObserver>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<NewNotificationCenterObserver>>>> { struct __tree<std::__value_type<std::string, std::shared_ptr<NewNotificationCenterObserver>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<NewNotificationCenterObserver>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::shared_ptr<NewNotificationCenterObserver>>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _newNotificationCenterObservers;
    struct ObjectRef<__CFRunLoop *> { struct __CFRunLoop *mCFObject; } _clientRunLoop;
    struct StringRef { struct ObjectRef<const __CFString *> { struct __CFString *mCFObject; } mObject; } _clientRunLoopMode;
}

@property void /* function */ *clientInterruptionListenerProc;
@property void *clientUserData;
@property BOOL isConfigured;
@property (readonly) AVAudioSession *avas;
@property unsigned int interruptionType;

- (id)initWithSession:(id)a0;
- (BOOL)isValid;
- (void)addNSNotificationListenerFor:(id)a0 session:(id)a1 selector:(SEL)a2;
- (void)handleServerReset:(id)a0;
- (void)removeAVAudioSessionKVOObservers:(unsigned int)a0;
- (void)handleServerDeath:(id)a0;
- (int)AudioSessionAddPropertyListenerImpl:(unsigned int)a0 userProc:(void /* function */ *)a1 userData:(void *)a2;
- (id)initWithStrongSession:(id)a0;
- (int)AudioSessionRemovePropertyListenerWithUserDataImpl:(unsigned int)a0 userProc:(void /* function */ *)a1 userData:(void *)a2;
- (int)AudioSessionGetPropertyImpl:(unsigned int)a0 size:(unsigned int *)a1 data:(void *)a2;
- (int)resetClientConfiguration;
- (void)addAVAudioSessionKVOObservers:(unsigned int)a0 session:(id)a1;
- (int)setClientConfiguration:(struct __CFRunLoop { } *)a0 runLoopMode:(struct __CFString { } *)a1 listenerProc:(void /* function */ *)a2 userData:(void *)a3;
- (int)AudioSessionSetActiveImpl:(unsigned char)a0 flags:(unsigned int)a1;
- (void)addNSNotificationListenerFor:(id)a0 session:(id)a1 block:(id /* block */)a2;
- (int)AudioSessionRemovePropertyListenerImpl:(unsigned int)a0;
- (id).cxx_construct;
- (void)handleInterruption:(id)a0;
- (void)handleRouteChange:(id)a0;
- (int)AudioSessionGetPropertySizeImpl:(unsigned int)a0 size:(unsigned int *)a1;
- (int)AudioSessionSetPropertyImpl:(unsigned int)a0 size:(unsigned int)a1 data:(const void *)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)callPropertyListeners:(unsigned int)a0 data:(id)a1;

@end
