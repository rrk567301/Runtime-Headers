@interface NewDeviceOutreachMacUI.NDOAMSUIViewController : AMSUIWebViewController <AMSUIWebDelegate> {
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ isLoaded;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (id)initWithBag:(id)a0 account:(id)a1 clientInfo:(id)a2;
- (BOOL)webViewController:(id)a0 handleDelegateAction:(id)a1 completion:(id /* block */)a2;

@end
