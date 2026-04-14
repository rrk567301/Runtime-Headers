@interface CKRemotePeoplePickerViewController : _EXExtensionViewController <CPPeoplePickerXPCHost> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentViewController;
    void /* unknown type, empty encoding */ state;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidLayout;
- (id)initWithCoder:(id)a0;
- (void)viewDidDisappear;
- (void)didUpdateViewBoundsWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dismissViewControllerWithSuccess:(BOOL)a0;
- (void)requestActivity:(id /* block */)a0;

@end
