@class AVAudioFormat, NSMutableDictionary;

@interface ExternalStreamManager : NSObject {
    NSMutableDictionary *_streamGroups;
    void *_voiceManager;
    struct SessionManager { id x0; id x1; struct VoiceManager *x2; id x3; } *_sessionManager;
    AVAudioFormat *_engineFormat;
    unsigned int _maximumFramesToRender;
    char _enableAudioIssueDetector;
    struct ExternalStreamSessionCommandExecutor { void /* function */ **_vptr$ICommandable; void *mCommandQueues; int mQueueCount; struct log_category *mLogCategory; struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } mIsOverflowing; } _sessionCommandExecutor;
    struct unfair_recursive_lock { struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } m_lock; } _caulk_unfair_recursive;
    struct unordered_map<unsigned long long, void (^)(NSUUID *, NSUUID *, signed char), std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, void (^)(NSUUID *, NSUUID *, signed char)>>> { struct __hash_table<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, signed char)>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, signed char)>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, signed char)>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, signed char)>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, signed char)>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, signed char)>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, signed char)>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, signed char)>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, signed char)>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, signed char)>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, signed char)>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, signed char)>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, signed char)>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, signed char)>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, signed char)>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { float __value_; } __p3_; } __table_; } _controllerPauseStateCallbacks;
    unsigned long long _controllerPauseStateCallbackCounter;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)update;
- (unsigned long long)_fadeInputStreamsInSessionToken:(unsigned int)a0 isMuted:(char)a1 fadeTimeInSeconds:(float)a2 synchronous:(char)a3;
- (char)_setPauseExternalInputStreamGroupID:(id)a0 streamID:(id)a1 isPaused:(char)a2 fromPlatformCallback:(char)a3 error:(id *)a4;
- (char)_setPauseExternalInputStreamWithoutNotifyingClient:(id)a0 isPaused:(char)a1 fromPlatformCallback:(char)a2 error:(id *)a3;
- (void)_setSessionInputStreamState:(id)a0 muted:(char)a1 fromPlatformCallback:(char)a2;
- (void)_updateRecordingAbility:(id)a0 streamID:(id)a1 canRecord:(char)a2;
- (void)abandonControlOfExternalStreamGroupID:(id)a0 withCallback:(id /* block */)a1;
- (unsigned long long)addControllerPauseStateDidUpdateCallback:(id /* block */)a0;
- (char)addExternalInputStreamGroupID:(id)a0 streamID:(id)a1 attributedTo:(id)a2 definition:(id)a3 isPaused:(char)a4 canRecord:(char)a5 fader:(struct shared_ptr<caulk::synchronized<Phase::Controller::ExternalStreamFader>> { void *x0; struct __shared_weak_count *x1; })a6 pauseStateDidUpdateCallback:(id /* block */)a7 error:(id *)a8;
- (void)addExternalOutputStreamGroupID:(id)a0 streamID:(id)a1 attributedTo:(id)a2 definition:(id)a3 startsPaused:(char)a4 renderBlock:(id /* block */)a5 withCallback:(id /* block */)a6;
- (void)claimControlOfExternalStreamGroupID:(id)a0 attributedTo:(id)a1 stateChangeBlock:(id /* block */)a2 withCallback:(id /* block */)a3;
- (struct unique_ptr<Phase::Controller::StreamRenderer, std::default_delete<Phase::Controller::StreamRenderer>> { struct __compressed_pair<Phase::Controller::StreamRenderer *, std::default_delete<Phase::Controller::StreamRenderer>> { struct StreamRenderer *x0; } x0; })createRendererForStream:(id)a0 outputChannelLayout:(unsigned int)a1 normalize:(char)a2 targetLKFS:(double)a3 error:(id *)a4;
- (id)formatForStream:(id)a0 error:(id *)a1;
- (void)gatherDebugInformation:(id /* block */)a0;
- (id)initWithTaskManager:(void *)a0 engineMode:(long long)a1 engineFormat:(id)a2 maximumFramesToRender:(unsigned int)a3 enableAudioIssueDetector:(char)a4;
- (void)removeAllResourcesAttributedToClientID:(id)a0;
- (void)removeControllerPauseStateDidUpdateCallback:(unsigned long long)a0;
- (void)removeExternalInputStreamGroupID:(id)a0 streamID:(id)a1;
- (void)removeExternalOutputStreamGroupID:(id)a0 streamID:(id)a1 withCallback:(id /* block */)a2;
- (unsigned int)sessionIdForStream:(id)a0 error:(id *)a1;
- (void)setExternalInputStreamSession:(unsigned int)a0 isActive:(char)a1;
- (unsigned long long)setExternalInputStreamSessionMute:(unsigned int)a0 isMuted:(char)a1 fadeTimeInSeconds:(float)a2;
- (void)setMuteExternalInputStreamGroupID:(id)a0 streamID:(id)a1 isMuted:(char)a2;
- (char)setPauseExternalInputStreamGroupID:(id)a0 streamID:(id)a1 isPaused:(char)a2 error:(id *)a3;
- (char)setPauseExternalOutputStreamGroupID:(id)a0 streamID:(id)a1 isPaused:(char)a2 error:(id *)a3;
- (char)streamIsPaused:(id)a0 error:(id *)a1;
- (long long)typeForStream:(id)a0 error:(id *)a1;
- (void)updateController:(id)a0 pauseState:(char)a1;
- (void)updateExternalInputStreamRecordingAbility:(id)a0 streamID:(id)a1 canRecord:(char)a2;

@end
