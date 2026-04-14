@interface AMSUIMessageLoadingViewController : AMSUICommonViewController {
    void /* unknown type, empty encoding */ loadingController;
    void /* unknown type, empty encoding */ presentationContext;
}

+ (id)placeholderStyleLoadingControllerWithMessage:(id)a0;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)removeMessage;

@end
