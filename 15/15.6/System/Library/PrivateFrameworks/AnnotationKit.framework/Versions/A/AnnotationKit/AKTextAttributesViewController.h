@class AKController, NSTextField, NSSegmentedControl, AKTextAttributesUIItemDelegate, AKFontChooserUIItemDelegate, NSString, NSPopUpButton, AKPopoverColorWell, NSStepper;

@interface AKTextAttributesViewController : NSViewController <NSMenuItemValidation, AKFontChooserUserInterfaceItem, AKTextAttributesUserInterfaceItem>

@property (weak) AKController *controller;
@property (retain) AKFontChooserUIItemDelegate *fontUIItemDelegate;
@property (retain) AKTextAttributesUIItemDelegate *textAttributesUIItemDelegate;
@property char buildingFontFamilyMenu;
@property (retain, nonatomic) NSPopUpButton *fontFamilyPopup;
@property (retain, nonatomic) NSPopUpButton *fontFacePopup;
@property (retain, nonatomic) NSTextField *fontSizeText;
@property (retain, nonatomic) NSStepper *fontSizeStepper;
@property (retain, nonatomic) NSSegmentedControl *textStyleSegmented;
@property (retain, nonatomic) AKPopoverColorWell *fontColorWell;
@property (retain, nonatomic) NSSegmentedControl *alignmentHorizontal;
@property long long lastActionID;
@property (retain) id lastActionValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_buildFontFamilyMenuOperationQueue;
+ (void)_setupTextStyleImages:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (char)isEnabled;
- (id)convertFont:(id)a0;
- (id)initWithController:(id)a0;
- (char)validateMenuItem:(id)a0;
- (void)viewDidLoad;
- (char)isBoldUIEnabled;
- (void)setBoldEnabled:(char)a0;
- (void)_buildFontFaceMenuForFamily:(id)a0;
- (void)_buildFontFamilyMenu;
- (void)_updateFontFacePopupForFaceName:(id)a0;
- (void)_updateFontFamilyMenu:(id)a0;
- (void)_updateFontFamilyPopupForFamilyName:(id)a0;
- (void)alignmentHorizontalAction:(id)a0;
- (id)convertTextAttributes:(id)a0;
- (void)fontColorAction:(id)a0;
- (void)fontFaceMenuAction:(id)a0;
- (void)fontFamilyMenuAction:(id)a0;
- (void)fontSizeControlAction:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1 controller:(id)a2;
- (char)isItalicsUIEnabled;
- (void)sendFontAction;
- (void)sendTextAttributesAction;
- (void)setBoldSelected:(char)a0;
- (void)setItalicsEnabled:(char)a0;
- (void)setItalicsSelected:(char)a0;
- (void)setUnderlineSelected:(char)a0;
- (void)syncBoldAndItalicToUI:(id)a0;
- (void)syncFontsToUI:(id)a0;
- (void)syncTextAttributesToUI:(id)a0;
- (void)textStyleSegmentedAction:(id)a0;
- (void)updateBoldOrItalics;
- (char)validateUserInterfaceItems;

@end
