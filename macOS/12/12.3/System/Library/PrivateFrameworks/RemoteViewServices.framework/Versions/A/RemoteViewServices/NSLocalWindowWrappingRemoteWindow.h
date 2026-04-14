@class NSRemoteWindowController;

@interface NSLocalWindowWrappingRemoteWindow : NSPanel

@property id /* block */ eventHandler;
@property NSRemoteWindowController *remoteWindowController;
@property (readonly) BOOL canBecomeKeyWindow;
@property (readonly) BOOL canBecomeMainWindow;

- (BOOL)validateUserInterfaceItem:(id)a0;
- (id)supplementalTargetForAction:(SEL)a0 sender:(id)a1;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)makeKeyWindow;
- (void)sendEvent:(id)a0;
- (void)makeMainWindow;
- (void)keyDown:(id)a0;
- (void)redo:(id)a0;
- (void)undo:(id)a0;
- (void)_enableAutomaticTerminationForRVSClient;
- (BOOL)blacklistedSelector:(SEL)a0;
- (void)_disableAutomaticTerminationForRVSClient;
- (void)remoteResponderChainPerformSelector:(SEL)a0;
- (BOOL)remoteValidateAction:(SEL)a0 tag:(long long)a1 type:(unsigned long long)a2;
- (id)_possiblyPerformAction:(SEL)a0 inRemoteReponderChainAndDoAction:(BOOL)a1;

@end
