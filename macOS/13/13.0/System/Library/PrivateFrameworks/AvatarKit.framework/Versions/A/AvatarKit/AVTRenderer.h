@class SCNNode, NSString, AVTAvatar, AVTAvatarEnvironment, NSLock;

@interface AVTRenderer : SCNRenderer <_SCNSceneCommandBufferStatusMonitor, _SCNSceneRendererResourceManagerMonitor, SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI> {
    AVTAvatarEnvironment *_environment;
    AVTAvatar *_avatar;
    SCNNode *_avatarNode;
    NSLock *_lock;
    BOOL _pauseSimulation;
    unsigned long long _antialiasingMode;
}

@property (retain, nonatomic) AVTAvatar *avatar;
@property (copy, nonatomic) NSString *framingMode;
@property (nonatomic) unsigned long long avt_antialiasingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)renderer;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)renderer:(id)a0 commandBufferDidCompleteWithError:(id)a1;
- (void)renderer:(id)a0 didFallbackToDefaultTextureForSource:(id)a1 message:(id)a2;
- (id)_renderer:(id)a0 subdivDataForHash:(id)a1;
- (void)_renderer:(id)a0 didBuildSubdivDataForHash:(id)a1 dataProvider:(id /* block */)a2;
- (void)_renderer:(id)a0 updateAtTime:(double)a1;
- (void)_renderer:(id)a0 didApplyAnimationsAtTime:(double)a1;
- (id)_initWithOptions:(id)a0 isPrivateRenderer:(BOOL)a1 privateRendererOwner:(id)a2 clearsOnDraw:(BOOL)a3 context:(void *)a4 renderingAPI:(unsigned long long)a5;
- (void)_detachAvatarFromRenderer;
- (void)avatarDidChange;
- (void)_avtSetupWithOptions:(id)a0;
- (void)__setAvatar:(id)a0;
- (void)_setAvatar:(id)a0;
- (void)fadePuppetToWhite:(float)a0;

@end
