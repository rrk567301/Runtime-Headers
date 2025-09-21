@class IPCustomPronounSheetController, NSPopUpButton;
@protocol IPPronounPickerButtonControllerDelegate;

@interface IPPronounPickerButtonController : NSObject

@property (retain, nonatomic) NSPopUpButton *popUpButton;
@property (retain, nonatomic) IPCustomPronounSheetController *customPronounSheet;
@property (weak, nonatomic) id<IPPronounPickerButtonControllerDelegate> delegate;

+ (char)shouldDisplayPronounPickerByDefault;
+ (char)canDisplayPronounPicker;

- (void).cxx_destruct;
- (void)updateMenu;
- (void)buttonValueChanged:(id)a0;
- (void)chooseCustomPronoun:(id)a0;
- (id)initWithPopUpButton:(id)a0;

@end
