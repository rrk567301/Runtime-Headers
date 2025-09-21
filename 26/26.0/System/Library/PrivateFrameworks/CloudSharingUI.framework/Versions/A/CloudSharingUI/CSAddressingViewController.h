@class _TtC14CloudSharingUI21AddressingViewFactory;

@interface CSAddressingViewController : NSViewController {
    _TtC14CloudSharingUI21AddressingViewFactory *_addressingViewFactory;
}

- (void)loadView;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0 userDidClickPrimaryButton:(id /* block */)a1 userDidClickSecondaryButton:(id /* block */)a2 userDidClickShowContactPicker:(id /* block */)a3 userDidChangeAddresses:(id /* block */)a4;
- (void)updateWithViewModel:(id)a0;

@end
