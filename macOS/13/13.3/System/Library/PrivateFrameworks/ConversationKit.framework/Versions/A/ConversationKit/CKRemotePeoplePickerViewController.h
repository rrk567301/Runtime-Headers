@interface CKRemotePeoplePickerViewController : _EXExtensionViewController <CPPeoplePickerXPCHost> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentViewController;
}

- (void)dismissViewControllerWithSuccess:(BOOL)a0;
- (void)requestActivity:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (BOOL)shouldAcceptXPCConnection:(id)a0;

@end
