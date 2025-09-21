@interface ProximityAppleIDSetupUI.PASUIExtensionHostViewController : NSViewController <ProximityAppleIDSetupUI.PASUIExtensionHost, _EXHostViewControllerDelegate> {
    void /* unknown type, empty encoding */ identity;
    void /* unknown type, empty encoding */ sceneID;
    void /* unknown type, empty encoding */ finished;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_exHostViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sceneProxy;
}

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)hostViewControllerDidActivate:(id)a0;
- (void)hostViewControllerWillDeactivate:(id)a0 error:(id)a1;
- (void)extensionDidFinishWith:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)promptForFlowCancelWithCompletion:(id /* block */)a0;

@end
