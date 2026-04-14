@class NSTextField, NSString, PXComposeRecipientTableCellModel, PXRoundImageView, NSButton;
@protocol PXComposeRecipientTableViewCellDelegate;

@interface PXComposeRecipientTableViewCell : NSTableCellView <PXChangeObserver> {
    PXRoundImageView *_imageView;
    NSTextField *_nameLabel;
    NSTextField *_addressLabel;
    NSButton *_checkbox;
}

@property (readonly, nonatomic) PXComposeRecipientTableCellModel *cellModel;
@property (weak, nonatomic) id<PXComposeRecipientTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateImage;
- (void).cxx_destruct;
- (void)_updateLabelColor;
- (void)_checkboxAction:(id)a0;
- (void)_updateAddress;
- (void)_updateChecked;
- (void)_updateName;
- (void)_updateShowsCheckbox;

@end
