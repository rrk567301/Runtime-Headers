@class NSString, TKTonePickerViewController;

@interface ABAlertToneCollectionViewItem : ABCollectionViewItem <TKTonePickerViewControllerDelegate>

@property (retain, nonatomic) TKTonePickerViewController *tonePickerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_localizedLabel;
- (id)toneIdentifierFromAlert:(id)a0;
- (id)toneNameForIdentifier:(id)a0;
- (void)tonePickerViewController:(id)a0 selectedToneWithIdentifier:(id)a1;
- (void)_updateViewValue;
- (BOOL)_shouldShowAddItemButton;
- (BOOL)_shouldShowRemoveItemButton;
- (id)_labelMenuItems;
- (BOOL)shouldEnableEditPopupButton;
- (BOOL)supportsClickToEdit;

@end
