@class NSString, NSWindow;

@interface PXSheetPresenter : NSObject <PXPresentationEnvironment> {
    NSWindow *_presentedWindow;
}

@property (retain, nonatomic) id sender;
@property (retain, nonatomic) NSWindow *presentingWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)presenterWithSender:(id)a0;
+ (id)presenterWithWindow:(id)a0;

- (void).cxx_destruct;
- (void)dismissAlert:(id)a0;
- (void)presentViewController:(id)a0;
- (void)presentAlert:(id)a0 completionHandler:(id /* block */)a1;
- (id)alertWindow;
- (void)dismissAlertWithToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)dismissViewController:(id)a0 completionHandler:(id /* block */)a1;
- (id)presentAlertWithConfigurationHandler:(id /* block */)a0;

@end
