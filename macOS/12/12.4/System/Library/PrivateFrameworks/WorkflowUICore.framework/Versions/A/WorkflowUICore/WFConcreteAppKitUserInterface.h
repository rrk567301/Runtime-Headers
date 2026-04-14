@class NSString, WFActionUserInterfaceListener, NSWindow;

@interface WFConcreteAppKitUserInterface : NSObject <WFActionUserInterfaceDelegate, WFAppKitUserInterface>

@property (retain, nonatomic) WFActionUserInterfaceListener *actionUserInterfaceListener;
@property (retain, nonatomic) NSWindow *presentedWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSWindow *window;
@property (readonly, nonatomic) NSString *userInterfaceType;

- (void).cxx_destruct;
- (id)initWithWindow:(id)a0;
- (void)presentAlert:(id)a0;
- (void)dismissPresentedContentWithCompletionHandler:(id /* block */)a0;
- (void)requestActionInterfacePresentationForActionClassName:(id)a0 classNamesByType:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestAuthorizationWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)actionUserInterface:(id)a0 showViewControllerInPlatter:(id)a1;
- (id)presentationAnchorForActionUserInterface:(id)a0;
- (void)dismissPlatterForActionUserInterface:(id)a0 completionHandler:(id /* block */)a1;

@end
