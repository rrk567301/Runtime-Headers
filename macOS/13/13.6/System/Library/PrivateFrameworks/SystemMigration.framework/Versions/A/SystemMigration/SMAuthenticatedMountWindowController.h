@class NSString, SMSystem_Client_TMSparseBundle, NSWindow;

@interface SMAuthenticatedMountWindowController : NSWindowController

@property (retain) SMSystem_Client_TMSparseBundle *lockedSystem;
@property NSWindow *sheetWindow;
@property (retain) NSString *password;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)pressedCancel:(id)a0;
- (void)dismissWindow;
- (void)pressedUnlock:(id)a0;
- (void)showForSystem:(id)a0 overWindow:(id)a1;

@end
