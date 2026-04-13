@class NSTextField, NSArray, NSView, SafeAutoFillChoicesPopUpButton, AddressBookDisplayData;
@protocol SafeAutoFillChoicesPopUpButtonViewControllerDelegate;

@interface SafeAutoFillChoicesPopUpButtonViewController : NSViewController

@property (weak, nonatomic) NSTextField *contentValueLabel;
@property (weak, nonatomic) NSView *popUpButtonContentView;
@property (weak, nonatomic) id<SafeAutoFillChoicesPopUpButtonViewControllerDelegate> delegate;
@property (weak, nonatomic) NSTextField *sectionTitleLabel;
@property (readonly, nonatomic) SafeAutoFillChoicesPopUpButton *popUpButton;
@property (readonly, copy, nonatomic) NSArray *arrayOfAddressBookDisplayData;
@property (readonly, nonatomic) AddressBookDisplayData *selectedDisplayData;
@property (nonatomic) double maximumContentValueLabelWidth;
@property (nonatomic) double maximumSectionTitleLabelWidth;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithArrayOfAddressBookDisplayData:(id)a0 initiallySelectedAddressBookData:(id)a1;
- (void)_updateButtonLabels;
- (void)_addMenuItems;
- (void)_alignMenuItemsAndUpdateMenuWidthToFitMenuItems;
- (void)_selectMenuItemCorrespondingToSelectedDisplayData;
- (void)_didSelectMenuItem:(id)a0;
- (void)_iterateThroughMenuItemsWithBlock:(id /* block */)a0;

@end
