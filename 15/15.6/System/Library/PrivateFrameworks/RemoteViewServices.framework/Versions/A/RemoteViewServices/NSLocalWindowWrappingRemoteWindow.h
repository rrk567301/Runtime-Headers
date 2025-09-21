@class NSRemoteWindowController;

@interface NSLocalWindowWrappingRemoteWindow : NSPanel

@property id /* block */ eventHandler;
@property NSRemoteWindowController *remoteWindowController;
@property (readonly) char canBecomeKeyWindow;
@property (readonly) char canBecomeMainWindow;

- (char)canBecomeKeyWindow;
- (char)canBecomeMainWindow;
- (void)keyDown:(id)a0;
- (void)makeKeyWindow;
- (void)makeMainWindow;
- (void)redo:(id)a0;
- (void)sendEvent:(id)a0;
- (id)supplementalTargetForAction:(SEL)a0 sender:(id)a1;
- (void)undo:(id)a0;
- (char)validateUserInterfaceItem:(id)a0;
- (void)_disableAutomaticTerminationForRVSClient;
- (void)_enableAutomaticTerminationForRVSClient;
- (id)_possiblyPerformAction:(SEL)a0 inRemoteReponderChainAndDoAction:(char)a1;
- (char)blacklistedSelector:(SEL)a0;
- (void)remoteResponderChainPerformSelector:(SEL)a0;
- (char)remoteValidateAction:(SEL)a0 tag:(long long)a1 type:(unsigned long long)a2;

@end
