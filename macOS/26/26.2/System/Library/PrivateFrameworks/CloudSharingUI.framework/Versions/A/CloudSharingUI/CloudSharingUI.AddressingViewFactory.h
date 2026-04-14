@class NSViewController;

@interface CloudSharingUI.AddressingViewFactory : NSObject {
    void /* unknown type, empty encoding */ viewModel;
}

@property (nonatomic, readonly) NSViewController *viewController;

- (void).cxx_destruct;
- (id)init;
- (id)initWithHeaderImageData:(id)a0 headerTitle:(id)a1 loadingText:(id)a2 supplementaryText:(id)a3 userInfoText:(id)a4 primaryButtonText:(id)a5 secondaryButtonText:(id)a6 shouldAllowEmptyAddresses:(BOOL)a7 userDidClickPrimaryButton:(id /* block */)a8 userDidClickSecondaryButton:(id /* block */)a9 userDidClickShowContactPicker:(id /* block */)a10 userDidChangeAddresses:(id /* block */)a11;
- (void)updateWithHeaderImageData:(id)a0 headerTitle:(id)a1 loadingText:(id)a2 supplementaryText:(id)a3 userInfoText:(id)a4 primaryButtonText:(id)a5 secondaryButtonText:(id)a6;

@end
