@interface NewDeviceOutreachMacUI.NDOAMSUIViewController : AMSUIWebViewController <AMSUIWebDelegate> {
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ isLoaded;
}

- (void)viewDidLoad;
- (id)initWithCoder:(id)a0;
- (BOOL)webViewController:(id)a0 handleDelegateAction:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithBag:(id)a0 account:(id)a1 clientInfo:(id)a2;

@end
