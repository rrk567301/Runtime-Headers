@class NSString, NSArray, NSStatusItem, FBScene, NSMutableDictionary, FBSceneWorkspace, NSStatusItemHostingView, NSPointerArray;
@protocol FBSceneClientProcess, NSStatusItemHostDelegate;

@interface NSStatusItemHost : NSObject <FBSceneObserver, FBSceneDelegate, NSStatusItemHostingViewDelegate> {
    BOOL _seenSceneResume;
    NSString *_debugClientIdentifier;
    FBScene *_scene;
    FBSceneWorkspace *_workspace;
    int _pid;
    NSString *_bundleIdentifier;
    id<FBSceneClientProcess> _client;
    NSStatusItemHostingView *_hostingView;
    NSPointerArray *_hostingViews;
    NSStatusItem *_positioningItem;
    unsigned long long _replicantSerial;
    NSMutableDictionary *_auxiliaryViews;
}

@property (class, copy) NSArray *allHosts;

@property BOOL clientRequestsVisibility;
@property BOOL allowsRemoval;
@property BOOL neverClip;
@property BOOL applicationItem;
@property (copy) NSString *persistentIdentifier;
@property (readonly) BOOL invalid;
@property (readonly) FBScene *scene;
@property (readonly) int pid;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) struct { unsigned int x0[8]; } auditToken;
@property (readonly, weak) id<NSStatusItemHostDelegate> delegate;
@property (readonly) NSStatusItemHostingView *itemView;
@property (retain) NSStatusItem *positioningItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_wantsScene:(id)a0;
+ (id)allHosts;

- (void)sceneDidDeactivate:(id)a0 withContext:(id)a1;
- (void)dealloc;
- (void)sceneDidInvalidate:(id)a0 withContext:(id)a1;
- (void)scene:(id)a0 didUpdateSettings:(id)a1;
- (void)scene:(id)a0 didUpdateClientSettings:(id)a1;
- (void).cxx_destruct;
- (id)scene:(id)a0 handleActions:(id)a1;
- (id)_clientSettings;
- (void)_updateForDiff:(id)a0;
- (void)_addAuxiliaryViewController:(id)a0 name:(id)a1 forSceneIdentifier:(id)a2;
- (id)_addStatusItemViewForScene:(id)a0;
- (id)_auxiliaryViewSceneIDs;
- (id)_hostSettings;
- (id)_initWithScene:(id)a0 workspace:(id)a1 client:(id)a2;
- (void)_removeAuxiliaryHostingViewNamed:(id)a0;
- (void)_updateOffScreenPositioningFrames;
- (void)_updateSettings:(id /* block */)a0;
- (void)activateWithDelegate:(id)a0;
- (id)createActiveReplicantView;
- (id)createStatusItem;
- (void)dismissDropDownContent;
- (id)hostingView:(id)a0 eventTargetForEvent:(id)a1;
- (void)hostingViewDidSendMouseDown:(id)a0;
- (void)notifyIsPresentingContent;
- (void)presentDropDownContent;
- (void)requestVisibility:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)requestVisibility:(BOOL)a0 isTemporary:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
