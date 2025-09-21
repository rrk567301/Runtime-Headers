@interface CKRemotePeoplePickerViewController : _EXExtensionViewController <CPPeoplePickerXPCHost> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentViewController;
    void /* unknown type, empty encoding */ state;
}

- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (void)viewDidLayout;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)viewDidDisappear;
- (void)didUpdateViewBoundsWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dismissViewControllerWithSuccess:(BOOL)a0;
- (void)requestActivity:(id /* block */)a0;

@end
