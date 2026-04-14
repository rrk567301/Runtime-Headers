@class KHFrame, NSArray, KHTextView, NSString, NSPopUpButton, NSComboBox, NSButton;

@interface KHFontPickerController : UXViewController <NSComboBoxDelegate>

@property (retain) NSPopUpButton *fontMenuButton;
@property (retain) NSPopUpButton *fontFaceButton;
@property (retain) NSComboBox *fontSizeButton;
@property (retain) NSButton *colorButton;
@property (retain) KHFrame *frame;
@property (retain) NSArray *fontList;
@property (retain) KHTextView *textView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (BOOL)control:(id)a0 textShouldEndEditing:(id)a1;
- (void)comboBoxSelectionDidChange:(id)a0;
- (id)initWithTextView:(id)a0;
- (void)updateControls;
- (void)itemChosen:(id)a0;
- (void)fontMenuButtonClicked:(id)a0;
- (id)attributedStringForFontFamily:(id)a0;
- (void)addMenuItemForFontFamily:(id)a0 toMenu:(id)a1;
- (id)headerItemWithTitle:(id)a0;

@end
