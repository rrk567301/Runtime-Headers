@class NSString, NSViewController, NSXPCConnection, NSArray;

@interface AUAudioUnitExtensionHostViewController : _EXHostViewController <_EXHostViewControllerDelegate, AUAudioUnitExtensionHostViewControllerInterface> {
    NSViewController *_auViewController;
    NSArray *_horizontal;
    NSArray *_vertical;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) id /* block */ didBeginHostingCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)postEventToHost:(id)a0 owner:(unsigned int)a1;

- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)addChildViewController:(id)a0;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)hostViewControllerDidActivate:(id)a0;
- (void)hostViewControllerWillDeactivate:(id)a0 error:(id)a1;
- (id)_containedRemoteViewController;
- (void)sendUnhandledEvent:(id)a0 owner:(unsigned int)a1 reply:(id /* block */)a2;
- (struct CGSize { double x0; double x1; })determineViewSize:(id)a0;
- (id)initWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)markViewForRedraw:(id)a0;
- (void)resizeWindow:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)setAUContainerViewConstraints:(id)a0 childView:(id)a1 auViewSize:(struct CGSize { double x0; double x1; })a2;

@end
