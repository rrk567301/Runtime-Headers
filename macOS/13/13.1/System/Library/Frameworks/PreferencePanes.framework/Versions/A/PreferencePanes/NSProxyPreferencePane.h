@class NSString, NSXPCConnection, NSObject, NSPrefPaneBundle;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface NSProxyPreferencePane : NSPreferencePane <PreferencePaneHostProtocol>

@property (retain) NSObject<OS_dispatch_semaphore> *commConnectionQueueSema;
@property (retain) NSObject<OS_dispatch_queue> *commConnectionQueue;
@property (retain) NSXPCConnection *connection;
@property (retain) NSString *path;
@property (retain) NSString *bundleIdentifier;
@property (retain) NSPrefPaneBundle *ppBundle;
@property (readonly) BOOL hasConnection;

+ (BOOL)isDebug;

- (void).cxx_destruct;
- (BOOL)hasConnection;
- (void)didHide;
- (void)didSelect;
- (void)didUnselect;
- (void)willSelect;
- (void)willUnselect;
- (void)didBecomeActive;
- (void)authorize;
- (void)willResignActive;
- (void)willBecomeActive;
- (void)didResignActive;
- (id)loadMainView;
- (id)mainNibName;
- (void)assignMainView;
- (void)willSelectWithReply:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (unsigned long long)shouldUnselect;
- (void)willHide;
- (void)willUnhide;
- (void)didUnhide;
- (id)helpMenuItems;
- (void)handleOpenParameter:(const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a0;
- (void)revealElementForKey:(id)a0;
- (void)openDocumentAtPath:(id)a0;
- (BOOL)hasElementForKey:(id)a0;
- (void)switchToPanel:(id)a0;
- (void)switchToPanel:(id)a0 anchor:(id)a1;
- (void)setSuddenTerminationEnabled:(BOOL)a0;
- (void)toggleTouchBarControlStripCustomizationPalette;
- (id)initWithPrefPaneBundle:(id)a0;
- (void)assignConnection:(id)a0;
- (void)reloadMainView;

@end
