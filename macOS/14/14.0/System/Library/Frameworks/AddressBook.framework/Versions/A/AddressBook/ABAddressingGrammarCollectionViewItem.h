@class ABCollectionRowViewFactory, IPPronounPickerButtonController;

@interface ABAddressingGrammarCollectionViewItem : ABCollectionViewItem <IPPronounPickerButtonControllerDelegate>

@property (retain, nonatomic) ABCollectionRowViewFactory *rowViewFactory;
@property (retain, nonatomic) IPPronounPickerButtonController *pronounPickerController;

- (void).cxx_destruct;
- (id)_localizedLabel;
- (void)pronounPickerButtonController:(id)a0 termOfAddressDidChange:(id)a1;
- (void)_updateViewValue;
- (BOOL)hasTransformedValue;
- (BOOL)shouldEnableEditPopupButton;
- (BOOL)shouldShowLanguageLabel;
- (BOOL)supportsClickToEdit;
- (void)updateValueViewToTextField;

@end
