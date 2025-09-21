@class AVAudioFormat, NSMutableDictionary, VolumeEQPresetManager;

@interface ExternalStreamManager : NSObject {
    NSMutableDictionary *_streamGroups;
    void *_voiceManager;
    struct SessionManager { id x0; id x1; struct VoiceManager *x2; id x3; } *_sessionManager;
    AVAudioFormat *_engineFormat;
    unsigned int _maximumFramesToRender;
    BOOL _enableAudioIssueDetector;
    struct ExternalStreamSessionCommandExecutor { void /* function */ **_vptr$ICommandable; void *mCommandQueues; int mQueueCount; struct log_category *mLogCategory; struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } mIsOverflowing; } _sessionCommandExecutor;
    struct unfair_recursive_lock { struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } m_lock; } _caulk_unfair_recursive;
    struct unordered_map<unsigned long long, void (^)(NSUUID *, NSUUID *, bool), std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>>> { struct __hash_table<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _controllerPauseStateCallbacks;
    unsigned long long _controllerPauseStateCallbackCounter;
    VolumeEQPresetManager *_volumeEQPresetManager;
}

- (void)update;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onRouteChanged:(struct RouteChangeInfo { unsigned int x0; unsigned int x1; unsigned int x2; })a0;
- (unsigned long long)_fadeInputStreamsInSessionToken:(unsigned int)a0 isMuted:(BOOL)a1 fadeTimeInSeconds:(float)a2 synchronous:(BOOL)a3;
- (BOOL)_setPauseExternalInputStreamGroupID:(id)a0 streamID:(id)a1 isPaused:(BOOL)a2 fromPlatformCallback:(BOOL)a3 error:(id *)a4;
- (BOOL)_setPauseExternalInputStreamWithoutNotifyingClient:(id)a0 isPaused:(BOOL)a1 fromPlatformCallback:(BOOL)a2 error:(id *)a3;
- (void)_setSessionInputStreamState:(id)a0 muted:(BOOL)a1 fromPlatformCallback:(BOOL)a2;
- (void)_updateRecordingAbility:(id)a0 streamID:(id)a1 canRecord:(BOOL)a2;
- (void)abandonControlOfExternalStreamGroupID:(id)a0 withCallback:(id /* block */)a1;
- (unsigned long long)addControllerPauseStateDidUpdateCallback:(id /* block */)a0;
- (BOOL)addExternalInputStreamGroupID:(id)a0 streamID:(id)a1 attributedTo:(id)a2 definition:(id)a3 isPaused:(BOOL)a4 canRecord:(BOOL)a5 fader:(struct shared_ptr<caulk::synchronized<Phase::Controller::ExternalStreamFader>> { void *x0; struct __shared_weak_count *x1; })a6 pauseStateDidUpdateCallback:(id /* block */)a7 error:(id *)a8;
- (void)addExternalOutputStreamGroupID:(id)a0 streamID:(id)a1 attributedTo:(id)a2 definition:(id)a3 startsPaused:(BOOL)a4 renderBlock:(id /* block */)a5 withCallback:(id /* block */)a6;
- (void)claimControlOfExternalStreamGroupID:(id)a0 attributedTo:(id)a1 stateChangeBlock:(id /* block */)a2 withCallback:(id /* block */)a3;
- (struct shared_ptr<Phase::Controller::StreamRenderer> { struct StreamRenderer *x0; struct __shared_weak_count *x1; })createRendererForStream:(id)a0 outputChannelLayout:(unsigned int)a1 normalize:(BOOL)a2 targetLKFS:(double)a3 error:(id *)a4;
- (id)formatForStream:(id)a0 error:(id *)a1;
- (void)gatherDebugInformation:(id /* block */)a0;
- (id)initWithTaskManager:(void *)a0 engineMode:(long long)a1 engineFormat:(id)a2 maximumFramesToRender:(unsigned int)a3 enableAudioIssueDetector:(BOOL)a4;
- (void)onSessionVolume:(id /* block */)a0;
- (void)onSessionVolume:(unsigned int)a0 volume:(float)a1;
- (void)removeAllResourcesAttributedToClientID:(id)a0;
- (void)removeControllerPauseStateDidUpdateCallback:(unsigned long long)a0;
- (void)removeExternalInputStreamGroupID:(id)a0 streamID:(id)a1;
- (void)removeExternalOutputStreamGroupID:(id)a0 streamID:(id)a1 withCallback:(id /* block */)a2;
- (unsigned int)sessionIdForStream:(id)a0 error:(id *)a1;
- (void)setExternalInputStreamSession:(unsigned int)a0 isActive:(BOOL)a1;
- (unsigned long long)setExternalInputStreamSessionMute:(unsigned int)a0 isMuted:(BOOL)a1 fadeTimeInSeconds:(float)a2;
- (void)setMuteExternalInputStreamGroupID:(id)a0 streamID:(id)a1 isMuted:(BOOL)a2;
- (BOOL)setPauseExternalInputStreamGroupID:(id)a0 streamID:(id)a1 isPaused:(BOOL)a2 error:(id *)a3;
- (BOOL)setPauseExternalOutputStreamGroupID:(id)a0 streamID:(id)a1 isPaused:(BOOL)a2 error:(id *)a3;
- (void)setVolumeEQPreset:(struct shared_ptr<Phase::Controller::StreamRenderer> { struct StreamRenderer *x0; struct __shared_weak_count *x1; })a0 bandwidthType:(long long)a1;
- (BOOL)streamIsPaused:(id)a0 error:(id *)a1;
- (long long)typeForStream:(id)a0 error:(id *)a1;
- (void)updateController:(id)a0 pauseState:(BOOL)a1;
- (void)updateExternalInputStreamRecordingAbility:(id)a0 streamID:(id)a1 canRecord:(BOOL)a2;

@end
