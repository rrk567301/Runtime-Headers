@class NSArray, GEOCityPickerView, IGPopupWindowController, NSComboBox, NSWindow;

@interface CalUITimeZoneCityPickerController : NSObject {
    NSWindow *tzPanel;
    GEOCityPickerView *tzView;
    NSComboBox *_comboBox;
    IGPopupWindowController *_popup;
}

@property (retain, nonatomic) NSArray *topLevelObjects;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)timeZone;
- (void)okClicked:(id)a0;
- (void)cancelClicked:(id)a0;
- (void)_bootstrapUI;
- (id)popup;
- (BOOL)popupOnView:(id)a0;
- (void)clearDelegates;

@end
