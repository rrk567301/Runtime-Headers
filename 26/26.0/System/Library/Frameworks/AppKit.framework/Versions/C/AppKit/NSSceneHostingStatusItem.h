@class NSString, FBSceneWorkspace, NSStatusItemHost, FBScene;
@protocol FBSceneClientProcess;

@interface NSSceneHostingStatusItem : NSLocalStatusItem <FBSceneObserver> {
    FBScene *_scene;
    FBSceneWorkspace *_workspace;
    id<FBSceneClientProcess> _client;
    NSStatusItemHost *_host;
    unsigned int _debugClientIdentifier;
    BOOL _allowVisibility;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setView:(id)a0;
- (void)_updateVisibility;
- (void)sceneDidInvalidate:(id)a0 withContext:(id)a1;
- (void)scene:(id)a0 didUpdateClientSettings:(id)a1;
- (void).cxx_destruct;
- (id)scene:(id)a0 handleActions:(id)a1;
- (id)_clientSettings;
- (BOOL)_disallowShadow;
- (void)_updateForDiff:(id)a0;
- (BOOL)_allowItemDragging;
- (BOOL)_allowsUserRemoval;
- (void)_autosavePosition;
- (void)_clearAutosavedPreferredPosition;
- (void)_clearAutosavedState;
- (id)_diagnosticsDict;
- (id)_hostSettings;
- (void)_initializeAutosaveName;
- (BOOL)_neverClip;
- (BOOL)_participatesInNavigationLoop;
- (id)_preferredPositionDefaultsKey;
- (float)_savedPreferredPosition;
- (void)_setAppearsActive:(BOOL)a0;
- (void)_setDisplayIdentifier:(id)a0;
- (void)_setMenuBarHeight:(double)a0;
- (BOOL)_systemClock;
- (BOOL)_systemCompactClock;
- (void)_uninstall;
- (void)_updateReplicant:(id)a0;
- (void)_updateReplicants;
- (void)_updateSettings:(id /* block */)a0;
- (BOOL)_viewFillsWindow;
- (void)_viewSizeDidChange;
- (id)_visibleCCDefaultsKey;
- (id)_visibleDefaultsKey;
- (id)createReplicantItem;
- (BOOL)editMode;
- (id)initWithScene:(id)a0 workspace:(id)a1 client:(id)a2 activeItem:(id)a3 host:(id)a4;
- (void)setEditMode:(BOOL)a0;

@end
