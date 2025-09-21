@class PHASEEngine, NSDictionary, AVAudioSession, NSString, PHASESoundPrototype;

@interface PHASESoundEvent : NSObject <MetaParameterValueProtocol> {
    PHASEEngine *_engine;
    BOOL _startCalled;
    PHASESoundPrototype *_protoType;
    struct shared_ptr<Phase::ActionTreeObject> { struct ActionTreeObject *__ptr_; struct __shared_weak_count *__cntrl_; } _actionTreeObject;
    struct vector<Phase::UniqueObjectId, std::allocator<Phase::UniqueObjectId>> { struct UniqueObjectId *__begin_; struct UniqueObjectId *__end_; struct UniqueObjectId *__cap_; } _submixIds;
    struct CachedTapInfo { int clientPID; unsigned int audioSessionToken; BOOL isSiri; NSString *sceneIdentifier; } _cachedTapInfo;
}

@property (readonly) AVAudioSession *audioSession;
@property (readonly) unsigned long long preparedHostTime;
@property (readonly) unsigned long long ioStartHostTime;
@property (readonly) long long renderingState;
@property (readonly) long long prepareState;
@property (readonly, copy) NSDictionary *metaParameters;
@property (readonly, copy) NSDictionary *mixers;
@property (readonly, copy) NSDictionary *pushStreamNodes;
@property (readonly, copy) NSDictionary *pullStreamNodes;
@property (readonly, getter=isIndefinite) BOOL indefinite;

+ (id)new;

- (void)pause;
- (id)engine;
- (void)resume;
- (id)init;
- (BOOL)indefinite;
- (id)description;
- (void)internalCleanup;
- (id).cxx_construct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)prepareAndReturnError:(id *)a0;
- (void)startWithCompletion:(id /* block */)a0;
- (void)prepareWithCompletion:(id /* block */)a0;
- (void)resumeAtTime:(id)a0;
- (void)stopAndInvalidate;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;
- (id)getActionTreeMetaParameterNames;
- (void *)getActionTreeObject;
- (id)initWithEngine:(id)a0 assetIdentifier:(id)a1 error:(id *)a2;
- (id)initWithEngine:(id)a0 assetIdentifier:(id)a1 mixerParameters:(id)a2 error:(id *)a3;
- (id)initWithEngine:(id)a0 assetIdentifier:(id)a1 source:(id)a2 listener:(id)a3 error:(id *)a4;
- (id)initWithEngine:(id)a0 rootNode:(id)a1 error:(id *)a2;
- (id)initWithEngine:(id)a0 rootNode:(id)a1 mixerParameters:(id)a2 error:(id *)a3;
- (id)initWithEngine:(id)a0 rootNode:(id)a1 source:(id)a2 listener:(id)a3 error:(id *)a4;
- (id)initWithEngine:(id)a0 soundPrototype:(id)a1 error:(id *)a2;
- (id)initWithEngine:(id)a0 soundPrototype:(id)a1 mixerParameters:(id)a2 error:(id *)a3;
- (id)initWithEngine:(id)a0 soundPrototype:(id)a1 source:(id)a2 listener:(id)a3 error:(id *)a4;
- (id)internalGetActionTreeMetaParameters;
- (id)internalGetActionTreeMixersWithMixerParameters:(id)a0 actionTreeAsset:(const void *)a1 outError:(id *)a2;
- (id)internalGetActionTreePullStreamNodes:(id)a0;
- (id)internalGetActionTreePushStreamNodes:(id)a0;
- (BOOL)internalPrepareActionTreeWithCompletionBlock:(id /* block */)a0;
- (BOOL)internalStartActionTree:(id)a0 completion:(id /* block */)a1;
- (void)registerTapSources;
- (void)seekToTime:(double)a0 resumeAtEngineTime:(id)a1 completion:(id /* block */)a2;
- (void)setMetaParameter:(id)a0 value:(id)a1;
- (void)setMetaParameter:(id)a0 value:(double)a1 withTimeInterval:(double)a2;
- (void)setPrepareState:(long long)a0;
- (void)setRenderingState:(long long)a0;
- (void)startAtTime:(id)a0 completion:(id /* block */)a1;
- (void)unregisterTapSources;

@end
