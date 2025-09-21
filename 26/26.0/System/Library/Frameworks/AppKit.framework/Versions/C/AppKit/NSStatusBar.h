@class NSString, NSPointerArray, NSStatusItemHostListener, NSMutableArray, NSDiagnosticsHandler;

@interface NSStatusBar : NSObject <NSStatusItemHostListenerDelegate, NSStatusItemHostDelegate, NSStatusItemDelegate> {
    NSPointerArray *_items;
    long long _registeredForNote;
    NSStatusItemHostListener *_localItemListener;
    NSMutableArray *_localItemHosts;
    NSString *_localWorkspaceServiceIdentifier;
    long long _testingConfig;
    NSDiagnosticsHandler *_diagnosticsHandler;
}

@property (class, readonly) NSStatusBar *systemStatusBar;

@property (readonly) double contentPadding;
@property (readonly) struct CGSize { double x0; double x1; } backgroundSelectionInset;
@property (readonly, getter=isVertical) BOOL vertical;
@property (readonly) double thickness;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_performKeyEquivalent:(id)a0;
+ (id)_workspaceService;

- (void)dealloc;
- (id)_name;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)enableLayoutChangeNotifications;
- (void)_setRegisteredForNotifications:(BOOL)a0;
- (void)_connectAuxiliaryViewScene:(id)a0;
- (void)_connectScene:(id)a0;
- (id)_createStatusItemControlInWindow:(id)a0;
- (id)_diagnosticsDict;
- (void)_disconnectAuxiliaryViewScene:(id)a0;
- (void)_disconnectScene:(id)a0;
- (void)_insertObjectInItemArray:(id)a0;
- (void)_insertStatusItem:(id)a0;
- (id)_localWorkspaceServiceIdentifier;
- (void)_navigationCtrlF8Pressed;
- (BOOL)_performKeyEquivalent:(id)a0;
- (void)_removeObjectFromItemArray:(id)a0;
- (void)_removeStatusItem:(id)a0;
- (void)_setLocalWorkspaceServiceIdentifier:(id)a0;
- (void)_setTestingConfig:(long long)a0;
- (void)_statusItemIsDeallocing:(id)a0;
- (id)_statusItemWithLength:(double)a0 systemInsertOrder:(long long)a1;
- (id)_statusItemWithLength:(double)a0 withPriority:(long long)a1;
- (id)_statusItems;
- (long long)_testingConfig;
- (BOOL)_useScenes;
- (long long)backgroundStyleForHighlight:(BOOL)a0;
- (void)clearPersistentStateForHost:(id)a0;
- (void)didDismissDropDownContentForHost:(id)a0;
- (void)didInvalidateStatusItemHost:(id)a0;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 inView:(id)a1 highlight:(BOOL)a2;
- (void)removeStatusItem:(id)a0;
- (void)resetLayout:(id)a0;
- (id)statusBarLayoutPreferringAppearance:(id)a0 resolution:(double)a1;
- (void)statusItemListener:(id)a0 addedStatusItemHost:(id)a1;
- (id)statusItemWithLength:(double)a0;
- (void)userRemovedStatusItem:(id)a0;
- (void)willPresentDropDownContentForHost:(id)a0;

@end
