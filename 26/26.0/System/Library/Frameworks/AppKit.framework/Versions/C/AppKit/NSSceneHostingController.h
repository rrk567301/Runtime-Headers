@class NSString, FBSceneWorkspace, FBScene, NSSceneHostingView;
@protocol FBSceneClientProcess;

@interface NSSceneHostingController : NSObject <FBSceneDelegate, FBSceneObserver> {
    void /* function */ sceneIdentifier;
}

@property (nonatomic, readonly) NSSceneHostingView *hostingView;
@property (nonatomic, readonly) NSString *sceneIdentifier;
@property (nonatomic, retain) FBScene *scene;
@property (nonatomic, readonly) FBSceneWorkspace *workspace;
@property (nonatomic, readonly) id<FBSceneClientProcess> client;
@property (nonatomic, weak) void /* function */ delegate;

+ (BOOL)_wantsScene:(id)a0;

- (void)sceneDidDeactivate:(id)a0 withContext:(id)a1;
- (void)invalidate;
- (void)activate:(id)a0;
- (id)init;
- (void)sceneDidInvalidate:(id)a0 withContext:(id)a1;
- (void)scene:(id)a0 didUpdateSettings:(id)a1;
- (void)scene:(id)a0 didUpdateClientSettings:(id)a1;
- (void).cxx_destruct;
- (id)initWithScene:(id)a0 workspace:(id)a1 client:(id)a2;

@end
