@class NSString;

@interface AVAudioNotificationRouterXPC : NSObject <AVAudioNotificationCenterServer> {
    struct synchronized<NotificationDelegateCollectionXPC, caulk::mach::unfair_lock, caulk::empty_atomic_interface<NotificationDelegateCollectionXPC>> { struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } mMutex; struct NotificationDelegateCollectionXPC { struct unordered_map<unsigned long long, NotificationDelegateCollectionXPC::NotificationDelegates, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, NotificationDelegateCollectionXPC::NotificationDelegates>>> { struct __hash_table<std::__hash_value_type<unsigned long long, NotificationDelegateCollectionXPC::NotificationDelegates>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, NotificationDelegateCollectionXPC::NotificationDelegates>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, NotificationDelegateCollectionXPC::NotificationDelegates>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, NotificationDelegateCollectionXPC::NotificationDelegates>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, NotificationDelegateCollectionXPC::NotificationDelegates>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, NotificationDelegateCollectionXPC::NotificationDelegates>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, NotificationDelegateCollectionXPC::NotificationDelegates>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, NotificationDelegateCollectionXPC::NotificationDelegates>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } mDelegates; BOOL mIsAudioServiceTerminated; } mObject; } _delegates;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)addNotificationDelegate:(id)a0 error:(id *)a1;
- (unsigned long long)createRemoteNotificationCenter;
- (void)destroyRemoteNotificationCenter:(unsigned long long)a0;
- (void)removeNotificationDelegate:(unsigned long long)a0;
- (void)startObservingNotifications:(id)a0 forDelegate:(unsigned long long)a1;
- (void)stopObservingNotifications:(id)a0 forDelegate:(unsigned long long)a1;
- (void)handleAudiomxdReset;
- (void)handleAudiomxdTermination;
- (void)handleNotification:(id)a0 payload:(id)a1;
- (BOOL)isAudioServiceTerminated;
- (void)setAudioServiceTerminated:(BOOL)a0;

@end
