@class NSRemoteWindowController;

@interface NSLocalWindowWrappingRemoteWindow : NSPanel

@property id /* block */ eventHandler;
@property NSRemoteWindowController *remoteWindowController;
@property (readonly) BOOL canBecomeKeyWindow;
@property (readonly) BOOL canBecomeMainWindow;

- (BOOL)validateUserInterfaceItem:(id)a0;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)keyDown:(id)a0;
- (void)sendEvent:(id)a0;
- (void)redo:(id)a0;
- (void)undo:(id)a0;
- (void)makeKeyWindow;
- (void)makeMainWindow;
- (id)supplementalTargetForAction:(SEL)a0 sender:(id)a1;
- (BOOL)blacklistedSelector:(SEL)a0;
- (id)_possiblyPerformAction:(SEL)a0 inRemoteReponderChainAndDoAction:(BOOL)a1;
- (void)remoteResponderChainPerformSelector:(SEL)a0;
- (BOOL)remoteValidateAction:(SEL)a0 tag:(long long)a1 type:(unsigned long long)a2;
- (void)_disableAutomaticTerminationForRVSClient;
- (void)_enableAutomaticTerminationForRVSClient;

@end
