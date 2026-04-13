@interface NewDeviceOutreachMacUI.NDOACAMSUIViewController : AMSUIWebViewController <AMSUIWebDelegate> {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ warranty;
    void /* unknown type, empty encoding */ serialNumber;
    void /* unknown type, empty encoding */ source;
}

- (BOOL)webViewController:(id)a0 handleDelegateAction:(id)a1 completion:(id /* block */)a2;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithBag:(id)a0 account:(id)a1 clientInfo:(id)a2;

@end
