@interface PhotosUICore.PXModelDeliveryProgressViewController : UXViewController {
    void /* unknown type, empty encoding */ $__lazy_storage_$_progressView;
    void /* unknown type, empty encoding */ progressState;
    void /* unknown type, empty encoding */ progressConfiguration;
    void /* unknown type, empty encoding */ progressHostingViewController;
}

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setErrorState:(long long)a0;
- (void)reportProgress:(double)a0 stage:(unsigned long long)a1;
- (void)setIsiPadConfiguration:(BOOL)a0;

@end
