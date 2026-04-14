@class AOSUICircularImageView, NSImageView, NSTextField;

@interface AOSUIAccountContactSelectorItem : NSCollectionViewItem

@property (weak) NSTextField *fullNameTextField;
@property (weak) NSTextField *detailTextField;
@property (weak) AOSUICircularImageView *contactImageView;
@property (weak) NSImageView *checkmarkImageView;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)symbolConfigurationForItem;
- (void)updateForSelectedState:(BOOL)a0;
- (void)updateItemWithTitle:(id)a0 detailText:(id)a1 image:(id)a2;
- (void)updateWithContact:(id)a0;

@end
