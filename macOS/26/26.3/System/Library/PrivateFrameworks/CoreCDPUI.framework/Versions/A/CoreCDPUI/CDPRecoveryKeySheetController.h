@class NSWindow;

@interface CDPRecoveryKeySheetController : CDPRecoveryKeySheetBaseController

@property (retain) NSWindow *cdpRecoveryKeySheet;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleCompletion:(BOOL)a0 andError:(id)a1;
- (void)showCdpRecoveryKeyWithWindow:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
