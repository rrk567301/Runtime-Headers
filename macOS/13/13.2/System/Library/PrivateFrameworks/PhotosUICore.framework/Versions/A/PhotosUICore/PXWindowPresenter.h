@class NSString, NSResponder, NSWindow;

@interface PXWindowPresenter : NSWindowController <PXPresentationEnvironment>

@property (retain, nonatomic) NSResponder *sender;
@property (readonly, nonatomic) NSWindow *alertWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)presenterWithSender:(id)a0;
+ (id)presenterWithSender:(id)a0 tokenIdentifier:(id)a1;

- (void).cxx_destruct;
- (void)dismissAlert:(id)a0;
- (void)presentViewController:(id)a0;
- (void)dismissViewController:(id)a0 completionHandler:(id /* block */)a1;
- (id)presentAlertWithConfigurationHandler:(id /* block */)a0;
- (void)dismissAlertWithToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)presentAlert:(id)a0 completionHandler:(id /* block */)a1;
- (id)createOrActivatePresentationEnvironment;

@end
