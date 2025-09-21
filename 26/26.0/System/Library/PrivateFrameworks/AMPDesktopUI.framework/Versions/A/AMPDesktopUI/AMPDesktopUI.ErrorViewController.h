@interface AMPDesktopUI.ErrorViewController : NSViewController {
    void /* unknown type, empty encoding */ messageLabel;
    void /* unknown type, empty encoding */ retryButton;
    void /* unknown type, empty encoding */ message;
    void /* unknown type, empty encoding */ retryBlock;
}

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)retryTapped;

@end
