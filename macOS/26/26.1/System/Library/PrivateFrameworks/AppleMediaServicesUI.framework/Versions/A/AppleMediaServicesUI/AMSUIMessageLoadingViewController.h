@interface AMSUIMessageLoadingViewController : AMSUICommonViewController {
    void /* unknown type, empty encoding */ loadingController;
    void /* unknown type, empty encoding */ presentationContext;
}

+ (id)placeholderStyleLoadingControllerWithMessage:(id)a0;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeMessage;

@end
