@class NSWindow, SKUIPrivateMerchandisingViewController;

@interface SKPrivateMerchandisingMacHelper : NSObject {
    NSWindow *_panelWindow;
    NSWindow *_presentingWindow;
    SKUIPrivateMerchandisingViewController *_remoteController;
}

- (id)init;
- (void).cxx_destruct;
- (void)dismissSheet;
- (void)displayRequest:(id)a0 completion:(id /* block */)a1;
- (void)loadRemoteController:(id /* block */)a0;
- (void)presentSheetOverWindow:(id)a0;

@end
