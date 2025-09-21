@class NSArray;

@interface MIDIUMPMutableEndpoint : MIDIUMPEndpoint {
    struct CallbackData { id /* block */ mUserReceiveBlock; struct lf_read_synchronized_write<applesauce::dispatch::block<void (const MIDIEventList *, void *)>> { struct lf_read_sync_write_impl { struct atomic<caulk::concurrent::details::lf_read_sync_write_impl::State> { struct __cxx_atomic_impl<caulk::concurrent::details::lf_read_sync_write_impl::State, std::__cxx_atomic_base_impl<caulk::concurrent::details::lf_read_sync_write_impl::State>> { _Atomic struct State __a_value; } __a_; } mState; struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } mMutationLock; } mImpl; struct array<bool, 2UL> { BOOL __elems_[2]; } mValueValid; struct array<caulk::concurrent::lf_read_synchronized_write<applesauce::dispatch::block<void (const MIDIEventList *, void *)>>::T_storage, 2UL> { struct T_storage { struct array<std::byte, 8UL> { unsigned char __elems_[8]; } bytes; } __elems_[2]; } mValues; } mReceiveTapBlock; } _callbackData;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _callbackMutex;
    BOOL _isEnabled;
}

@property (copy, nonatomic) NSArray *mutableFunctionBlocks;
@property (readonly, nonatomic) BOOL isEnabled;

+ (id)description;

- (void)dealloc;
- (id).cxx_construct;
- (BOOL)deserialize:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)setEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)registerWithServer;
- (id)initWithName:(id)a0 deviceInfo:(id)a1 productInstanceID:(id)a2 MIDIProtocol:(int)a3 destinationCallback:(id /* block */)a4;
- (BOOL)registerFunctionBlocks:(id)a0 markAsStatic:(BOOL)a1 error:(id *)a2;
- (id)serializeDescription;
- (BOOL)setName:(id)a0 error:(id *)a1;
- (void)setReceiveTapBlock:(struct block<void (const MIDIEventList *, void *)> { id /* block */ x0; })a0;
- (BOOL)setStreamProtocol:(int)a0 error:(id *)a1;

@end
