@class NSWindow;

@interface CDPRecoveryKeySheetController : CDPRecoveryKeySheetBaseController

@property (retain) NSWindow *cdpRecoveryKeySheet;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)showCdpRecoveryKeyWithWindow:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)handleCompletion:(BOOL)a0 andError:(id)a1;

@end
