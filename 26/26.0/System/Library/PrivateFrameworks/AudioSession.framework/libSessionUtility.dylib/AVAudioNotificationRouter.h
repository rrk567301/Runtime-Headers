@class NSString, NSSet;

@interface AVAudioNotificationRouter : NSObject <AVAudioNotificationCenterServer> {
    struct ObjectRef<opaqueCMNotificationCenter *> { struct opaqueCMNotificationCenter *mCFObject; } _notificationCenter;
    struct ISessionCollectionProvider { void /* function */ **x0; } *_sessionCollectionProvider;
    struct synchronized<avas::NotificationDelegateCollection, caulk::mach::unfair_lock, caulk::empty_atomic_interface<avas::NotificationDelegateCollection>> { struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } mMutex; struct NotificationDelegateCollection { struct unordered_map<unsigned long long, avas::NotificationDelegateCollection::NotificationDelegates, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, avas::NotificationDelegateCollection::NotificationDelegates>>> { struct __hash_table<std::__hash_value_type<unsigned long long, avas::NotificationDelegateCollection::NotificationDelegates>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, avas::NotificationDelegateCollection::NotificationDelegates>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, avas::NotificationDelegateCollection::NotificationDelegates>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, avas::NotificationDelegateCollection::NotificationDelegates>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, avas::NotificationDelegateCollection::NotificationDelegates>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, avas::NotificationDelegateCollection::NotificationDelegates>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, avas::NotificationDelegateCollection::NotificationDelegates>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, avas::NotificationDelegateCollection::NotificationDelegates>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _delegates; unsigned long long _currentDelegateID; } mObject; } _delegates;
    NSSet *_propertyNotificationsOfInterest;
    void /* function */ *_sessionNotificationHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (int)handleInterruptionForPid:(int)a0 audioSessionID:(unsigned int)a1 mxSessionID:(unsigned long long)a2 interruptionState:(unsigned int)a3 interruptionInfo:(id)a4;
- (int)handleInterruptionForPid:(int)a0 audioSessionID:(unsigned int)a1 interruptionState:(unsigned int)a2 interruptionInfo:(id)a3;
- (void).cxx_destruct;
- (unsigned long long)addNotificationDelegate:(id)a0 error:(id *)a1;
- (void)handleCMNotification:(id)a0 object:(const void *)a1 payload:(void *)a2;
- (id)initWithNotificationCenter:(struct opaqueCMNotificationCenter { } *)a0 sessionCollectionProvider:(struct ISessionCollectionProvider { void /* function */ **x0; } *)a1 sessionNotificationHandler:(void /* function */ *)a2;
- (void)internal_UpdateNotificationCenterSubscriptions:(void *)a0;
- (void)internal_findSessionsBelongingToAudioSessionID:(unsigned int)a0 outMatches:(void *)a1;
- (void)internal_findSessionsMatchingAudioSessionID:(unsigned int)a0 outMatches:(void *)a1;
- (void)internal_findSessionsMatchingMXSessionID:(unsigned long long)a0 outMatches:(void *)a1;
- (void)internal_findSessionsMatchingObject:(const void *)a0 outMatches:(void *)a1;
- (int)internal_publishInterruptions:(id)a0;
- (void)internal_publishPropertyNotifications:(id)a0;
- (void)removeNotificationDelegate:(unsigned long long)a0;
- (BOOL)updateDelegate:(unsigned long long)a0 notificationFilter:(id)a1 error:(id *)a2;

@end
