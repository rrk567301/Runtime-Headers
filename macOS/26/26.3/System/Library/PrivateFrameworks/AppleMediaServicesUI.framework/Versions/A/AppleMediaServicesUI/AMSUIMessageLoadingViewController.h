@interface AMSUIMessageLoadingViewController : AMSUICommonViewController {
    void /* unknown type, empty encoding */ loadingController;
    void /* unknown type, empty encoding */ presentationContext;
}

+ (id)placeholderStyleLoadingControllerWithMessage:(id)a0;

- (void)viewWillLayoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)removeMessage;

@end
