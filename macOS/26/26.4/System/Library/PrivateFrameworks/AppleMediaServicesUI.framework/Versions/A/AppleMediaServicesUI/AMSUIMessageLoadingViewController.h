@interface AMSUIMessageLoadingViewController : AMSUICommonViewController {
    void /* unknown type, empty encoding */ loadingController;
    void /* unknown type, empty encoding */ presentationContext;
}

+ (id)placeholderStyleLoadingControllerWithMessage:(id)a0;

- (void)viewWillLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)removeMessage;

@end
