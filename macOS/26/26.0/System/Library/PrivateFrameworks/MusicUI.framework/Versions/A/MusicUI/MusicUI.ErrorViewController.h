@interface MusicUI.ErrorViewController : NSViewController {
    void /* unknown type, empty encoding */ messageLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_retryButton;
    void /* unknown type, empty encoding */ drawsBackground;
    void /* unknown type, empty encoding */ message;
    void /* unknown type, empty encoding */ retryBlock;
}

- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)retry;

@end
