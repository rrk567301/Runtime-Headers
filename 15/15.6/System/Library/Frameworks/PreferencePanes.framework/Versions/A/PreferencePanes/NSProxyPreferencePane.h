@class NSString, NSXPCConnection, NSObject, NSPrefPaneBundle;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface NSProxyPreferencePane : NSPreferencePane <PreferencePaneHostProtocol>

@property (retain) NSObject<OS_dispatch_semaphore> *commConnectionQueueSema;
@property (retain) NSObject<OS_dispatch_queue> *commConnectionQueue;
@property (retain) NSXPCConnection *connection;
@property (retain) NSString *path;
@property (retain) NSString *bundleIdentifier;
@property (retain) NSPrefPaneBundle *ppBundle;
@property (readonly) char hasConnection;

+ (char)isDebug;

- (void).cxx_destruct;
- (char)hasConnection;
- (void)didHide;
- (void)didBecomeActive;
- (void)didSelect;
- (void)didUnselect;
- (void)willSelect;
- (void)willUnselect;
- (void)authorize;
- (void)didResignActive;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)assignConnection:(id)a0;
- (void)assignMainView;
- (void)didUnhide;
- (void)handleOpenParameter:(const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a0;
- (char)hasElementForKey:(id)a0;
- (id)helpMenuItems;
- (id)initWithPrefPaneBundle:(id)a0;
- (id)loadMainView;
- (id)mainNibName;
- (void)openDocumentAtPath:(id)a0;
- (void)reloadMainView;
- (void)revealElementForKey:(id)a0;
- (void)setSuddenTerminationEnabled:(char)a0;
- (unsigned long long)shouldUnselect;
- (void)switchToPanel:(id)a0;
- (void)switchToPanel:(id)a0 anchor:(id)a1;
- (void)toggleTouchBarControlStripCustomizationPalette;
- (void)willHide;
- (void)willSelectWithReply:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)willUnhide;

@end
