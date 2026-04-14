@class AVAudioSession;

@interface REAudioManagerNotificationListener : NSObject {
    struct AudioSceneService { void /* function */ **x0; } *_owner;
    AVAudioSession *_audioSessionToFollow;
    struct UnfairLock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } _audioSessionMutex;
    struct REAudioServicesNotificationCallbackRegistry { struct unordered_map<REAudioServicesNotificationCallbackConfiguration, void (^)(), REAudioServicesNotificationCallbackRegistry::ConfigHasher, std::equal_to<REAudioServicesNotificationCallbackConfiguration>, std::allocator<std::pair<const REAudioServicesNotificationCallbackConfiguration, void (^)()>>> { struct __hash_table<std::__hash_value_type<REAudioServicesNotificationCallbackConfiguration, void (^)()>, std::__unordered_map_hasher<REAudioServicesNotificationCallbackConfiguration, std::__hash_value_type<REAudioServicesNotificationCallbackConfiguration, void (^)()>, REAudioServicesNotificationCallbackRegistry::ConfigHasher, std::equal_to<REAudioServicesNotificationCallbackConfiguration>>, std::__unordered_map_equal<REAudioServicesNotificationCallbackConfiguration, std::__hash_value_type<REAudioServicesNotificationCallbackConfiguration, void (^)()>, std::equal_to<REAudioServicesNotificationCallbackConfiguration>, REAudioServicesNotificationCallbackRegistry::ConfigHasher>, std::allocator<std::__hash_value_type<REAudioServicesNotificationCallbackConfiguration, void (^)()>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<REAudioServicesNotificationCallbackConfiguration, void (^)()>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<REAudioServicesNotificationCallbackConfiguration, void (^)()>, void *> *> *>>> { struct { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<REAudioServicesNotificationCallbackConfiguration, void (^)()>, void *> *> *>> { struct { unsigned long long __size_; } ; } __deleter_; } ; } __bucket_list_; struct { struct __hash_node_base<std::__hash_node<std::__hash_value_type<REAudioServicesNotificationCallbackConfiguration, void (^)()>, void *> *> { void *__next_; } __first_node_; } ; struct { unsigned long long __size_; } ; struct { float __max_load_factor_; } ; } __table_; } m_registry; } _callbackRegistry;
}

@property (readonly) AVAudioSession *audioSessionToFollow;

- (void)stop;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithOwner:(void *)a0;
- (id).cxx_construct;
- (void)registerTriggerCallback:(struct REAudioServicesNotificationCallbackConfiguration { unsigned char x0; unsigned char x1; unsigned long long x2; })a0 callback:(id /* block */)a1;
- (void)servicesLost:(id)a0;
- (void)servicesReset:(id)a0;
- (void)sessionInterrupted:(id)a0;
- (void)unregisterTriggerCallback:(struct REAudioServicesNotificationCallbackConfiguration { unsigned char x0; unsigned char x1; unsigned long long x2; })a0;

@end
