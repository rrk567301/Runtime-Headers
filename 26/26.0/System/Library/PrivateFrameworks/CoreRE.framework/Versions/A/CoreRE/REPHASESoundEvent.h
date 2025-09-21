@class PHASEMixerParameters, __end_, __cap_, NSObject, PHASEEngine, PHASEExternalOutputStreamController, NSString, PHASESoundEvent, PHASEListener, PHASESoundEventNodeAsset, AVAudioSession, PHASESource, AUAudioUnit, PHASEExternalOutputStream;
@protocol OS_dispatch_queue, REPHASESoundEventObserver;

@interface REPHASESoundEvent : NSObject <PHASEExternalStreamDelegate> {
    struct queue<REPHASESoundEventCommandState, std::deque<REPHASESoundEventCommandState>> { struct deque<REPHASESoundEventCommandState, std::allocator<REPHASESoundEventCommandState>> { struct __split_buffer<REPHASESoundEventCommandState *, std::allocator<REPHASESoundEventCommandState *>> { struct REPHASESoundEventCommandState **__first_; struct REPHASESoundEventCommandState **__begin_; struct REPHASESoundEventCommandState **__end_; struct REPHASESoundEventCommandState **__cap_; } __map_; unsigned long long __start_; unsigned long long __size_; } c; } _commandQueue;
    struct atomic<REAudioPlaybackState> { struct __cxx_atomic_impl<REAudioPlaybackState, std::__cxx_atomic_base_impl<REAudioPlaybackState>> { _Atomic unsigned long long __a_value; } __a_; } _state;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _isStopping;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _shouldExecuteCommand;
    PHASEEngine *_engine;
    PHASESource *_source;
    struct vector<PHASESource *, std::allocator<PHASESource *>> { __end_ **__begin_; __cap_ **x0; id *x1; } _sources;
    PHASEListener *_listener;
    PHASEMixerParameters *_mixerParameters;
    PHASESoundEventNodeAsset *_soundEventAsset;
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _commandQueueMutex;
    struct optional<double> { union { char __null_state_; double __val_; } ; BOOL __engaged_; } _stationaryTime;
    struct atomic<double> { struct __cxx_atomic_impl<double, std::__cxx_atomic_base_impl<double>> { _Atomic double __a_value; } __a_; } _latestSeekTarget;
    id /* block */ _soundEventFactory;
    NSObject<OS_dispatch_queue> *_phaseQueue;
}

@property (weak, nonatomic) NSObject<REPHASESoundEventObserver> *observer;
@property (nonatomic) struct shared_ptr<re::audio::REPHASESoundPrepareState> { struct REPHASESoundPrepareState *__ptr_; struct __shared_weak_count *__cntrl_; } prepareState;
@property (nonatomic) struct unordered_map<unsigned long long, std::shared_ptr<re::audio::REPHASESoundPrepareState>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::shared_ptr<re::audio::REPHASESoundPrepareState>>>> { struct __hash_table<std::__hash_value_type<unsigned long long, std::shared_ptr<re::audio::REPHASESoundPrepareState>>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::shared_ptr<re::audio::REPHASESoundPrepareState>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::shared_ptr<re::audio::REPHASESoundPrepareState>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, std::shared_ptr<re::audio::REPHASESoundPrepareState>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::shared_ptr<re::audio::REPHASESoundPrepareState>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::shared_ptr<re::audio::REPHASESoundPrepareState>>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::shared_ptr<re::audio::REPHASESoundPrepareState>>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::shared_ptr<re::audio::REPHASESoundPrepareState>>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } prepareStates;
@property (readonly, nonatomic) PHASESoundEvent *soundEvent;
@property (readonly, nonatomic) PHASEExternalOutputStreamController *externalStreamController;
@property (readonly) unsigned long long state;
@property (readonly) AVAudioSession *audioSession;
@property float cachedPlaybackSpeed;
@property float cachedReverbSendLevel;
@property float cachedDirectSendLevel;
@property BOOL soundEventPlayed;
@property (retain) NSString *assetIdentifier;
@property BOOL isGroupPlaybackEvent;
@property (retain, nonatomic) PHASEExternalOutputStream *externalStream;
@property (retain, nonatomic) AUAudioUnit *audioUnit;
@property (copy, nonatomic) id /* block */ renderBlock;
@property (copy, nonatomic) id /* block */ playbackStateChangeHandler;
@property (readonly) double latestSeekTarget;

+ (void)controllerWithEngine:(id)a0 streamUUID:(id)a1 mixerDefinition:(id)a2 source:(id)a3 listener:(id)a4 normalizationMode:(int)a5 targetLUFS:(double)a6 calibrationMode:(int)a7 calibrationLevel:(double)a8 callback:(id /* block */)a9;
+ (void)eventWithEngine:(id)a0 streamUUID:(id)a1 maximumFramesToRender:(unsigned int)a2 audioFormat:(id)a3 audioUnit:(id)a4 renderBlock:(id /* block */)a5 mixerDefinition:(id)a6 source:(id)a7 listener:(id)a8 group:(id)a9 normalizationMode:(int)a10 calibrationMode:(int)a11 calibrationLevel:(double)a12 audioSession:(id)a13 phaseQueue:(id)a14 callback:(id /* block */)a15;
+ (void)eventWithEngine:(id)a0 streamUUID:(id)a1 mixerDefinition:(id)a2 source:(id)a3 listener:(id)a4 normalizationMode:(int)a5 targetLUFS:(double)a6 calibrationMode:(int)a7 calibrationLevel:(double)a8 audioSession:(id)a9 phaseQueue:(id)a10 callback:(id /* block */)a11;

- (void)pause;
- (BOOL)seekToTime:(double)a0;
- (BOOL)_start;
- (BOOL)_resume;
- (void)dealloc;
- (void)resume;
- (id)description;
- (id).cxx_construct;
- (BOOL)_pause;
- (void).cxx_destruct;
- (void)prepareWithCompletion:(id /* block */)a0;
- (BOOL)_seekToTime:(double)a0;
- (id)mixer;
- (BOOL)_stopAndDestroy;
- (BOOL)_stopAndRePrepare;
- (void)_updateCommandQueue;
- (BOOL)changeFromExpectedState:(unsigned long long)a0 toState:(unsigned long long)a1;
- (unsigned long long)changeToState:(unsigned long long)a0;
- (void)clearSoundEventEngine;
- (id)initSyncGroupWithEngine:(id)a0 rootNode:(id)a1 assetIdentifier:(id)a2 listener:(id)a3 mixerParameters:(id)a4 audioSession:(id)a5 phaseQueue:(id)a6 sources:(struct vector<PHASESource *, std::allocator<PHASESource *>> { id *x0; id *x1; id *x2; })a7 outError:(id *)a8;
- (id)initWithEngine:(id)a0 soundEventAsset:(id)a1 source:(id)a2 listener:(id)a3 mixerParameters:(id)a4 audioSession:(id)a5 phaseQueue:(id)a6 outError:(id *)a7;
- (id)initWithEngine:(id)a0 source:(id)a1 listener:(id)a2 audioSession:(id)a3 phaseQueue:(id)a4;
- (id)initWithEngine:(id)a0 sources:(struct vector<PHASESource *, std::allocator<PHASESource *>> { id *x0; id *x1; id *x2; })a1 listener:(id)a2 audioSession:(id)a3 phaseQueue:(id)a4;
- (id)initWithSoundEventFactory:(id /* block */)a0 phaseQueue:(id)a1;
- (id)paramForKey:(id)a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })sourcePose;
- (struct vector<simd_float4x4, std::allocator<simd_float4x4>> { struct *x0; struct *x1; struct *x2; })sourcePoses;
- (void)stopAndDestroy;
- (void)stopAndRePrepare;
- (void)stream:(id)a0 didInvalidateWithError:(id)a1;
- (void)updateCommandQueue;

@end
