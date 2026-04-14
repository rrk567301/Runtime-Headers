@class NSString, NSStatusItemScene, NSMutableDictionary;

@interface NSSceneStatusItem : NSStatusItem <FBSSceneObserver> {
    NSString *_sceneIdentifier;
    NSStatusItemScene *_scene;
    BOOL _invalid;
    long long _auxiliaryViewSerial;
    NSMutableDictionary *_auxiliaryViewSceneIdentifiers;
    NSMutableDictionary *_auxiliaryViews;
    NSMutableDictionary *_auxiliaryViewHosts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)scene:(id)a0 didUpdateSettings:(id)a1;
- (void).cxx_destruct;
- (id)scene:(id)a0 handleActions:(id)a1;
- (void)_wakeStatusItem;
- (void)_updateForDiff:(id)a0;
- (void)_addAuxiliaryView:(id)a0 named:(id)a1;
- (id)_auxiliaryViewNameForScene:(id)a0;
- (void)_clearAutosavedState;
- (BOOL)_connectAuxiliaryViewScene:(id)a0;
- (BOOL)_connectScene:(id)a0;
- (float)_currentPreferredPosition;
- (void)_destroyReplicantScene:(id)a0;
- (id)_diagnosticsDict;
- (void)_didPresentContent:(id)a0;
- (BOOL)_disconnectAuxiliaryViewScene:(id)a0;
- (BOOL)_disconnectScene:(id)a0;
- (void)_dragStatusItemWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (float)_dropPriority;
- (id)_initWithStatusBar:(id)a0 length:(double)a1 priority:(long long)a2 systemInsertOrder:(long long)a3 activeItem:(id)a4;
- (void)_navigateWithCommand:(unsigned int)a0 options:(unsigned int)a1;
- (void)_presentDropDownContent;
- (void)_presentIndicatorInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_removeAuxiliaryViewNamed:(id)a0;
- (void)_requestAuxiliaryViewScene:(id)a0;
- (void)_requestScene;
- (void)_restorePreferencesFromAutosaveName;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectedContentFrame;
- (void)_sendSavedPreferredPosition;
- (void)_setDropPriority:(float)a0;
- (void)_setSelectedContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setVisible:(BOOL)a0 temporary:(BOOL)a1;
- (void)_setupReplicantScene:(id)a0;
- (void)_setupScene:(id)a0;
- (BOOL)_supportsDragging;
- (void)_uninstall;
- (void)_updateItemFlags;
- (void)_willPresentContent:(id)a0;
- (long long)hostWindowID;
- (void)scene:(id)a0 didUpdateHostHandle:(id)a1;
- (void)setAutosaveName:(id)a0;

@end
