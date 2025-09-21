@interface ATMicrophoneInjectionInsertManager : NSObject {
    struct guarded_lookup_hash_table<std::string, std::weak_ptr<MixTapToUplinkHost>, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences, caulk::concurrent::guarded_lookup_default_hash_fn<std::string>> { unsigned int mItemCount; struct atomic<caulk::concurrent::guarded_lookup_hash_table<std::string, std::weak_ptr<MixTapToUplinkHost>, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>::table_impl *> { struct __cxx_atomic_impl<caulk::concurrent::guarded_lookup_hash_table<std::string, std::weak_ptr<MixTapToUplinkHost>, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>::table_impl *, std::__cxx_atomic_base_impl<caulk::concurrent::guarded_lookup_hash_table<std::string, std::weak_ptr<MixTapToUplinkHost>, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>::table_impl *>> { _Atomic struct table_impl *__a_value; } __a_; } mTable; struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } mLookupCount; struct vector<std::unique_ptr<caulk::concurrent::guarded_lookup_hash_table<std::string, std::weak_ptr<MixTapToUplinkHost>, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>::table_impl>, std::allocator<std::unique_ptr<caulk::concurrent::guarded_lookup_hash_table<std::string, std::weak_ptr<MixTapToUplinkHost>, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>::table_impl>>> { void *__begin_; void *__end_; void *__cap_; } mReleasePool; struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mMutationMutex; } mUUIDToMixTapToUplinkHostMap;
    struct synchronized<std::vector<std::string>, caulk::mach::unfair_lock, caulk::empty_atomic_interface<std::vector<std::string>>> { struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } mMutex; struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; void *__cap_; } mObject; } mUUIDsOfAudioStreams;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } mScreenSharingEnabled;
}

@property (class, readonly) ATMicrophoneInjectionInsertManager *sharedInstance;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createProcessingInsert:(id)a0 audioSessionID:(unsigned int)a1 streamDescription:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a2 layoutTag:(unsigned int)a3;
- (id)createProcessingInsert:(id)a0 audioSessionID:(unsigned int)a1 streamFormat:(id)a2;
- (id)createProcessingInsert:(id)a0 streamDescription:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a1 layoutTag:(unsigned int)a2;
- (id)createProcessingInsert:(id)a0 streamFormat:(id)a1;
- (id)getProcessingInsert:(id)a0;
- (struct ScopedLookupOfMixTapToUplinkHost { struct scoped_lookup { void *x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x1; struct optional<std::weak_ptr<MixTapToUplinkHost>> { union { char x0; struct weak_ptr<MixTapToUplinkHost> { struct MixTapToUplinkHost *x0; struct __shared_weak_count *x1; } x1; } x0; BOOL x1; } x2; struct element_t *x3; } x0; struct shared_ptr<MixTapToUplinkHost> { struct MixTapToUplinkHost *x0; struct __shared_weak_count *x1; } x1; })getScopedLookupOfMixTapToUplinkHost:(id)a0;
- (struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; void *x2; })getUUIDsOfAudioStreams;
- (void)refreshAppsPermissionToUseMixTapToTelephonyUplink:(struct { unsigned int x0[8]; })a0;
- (void)releaseProcessingInsertIfUnused:(id)a0;
- (int)setMixTapToTelephonyUplink:(unsigned int)a0 microphoneInjectionMode:(int)a1;
- (void)setMixTapToTelephonyUplinkAllowedByUser:(BOOL)a0;
- (void)setScreenSharingEnabled:(BOOL)a0;

@end
