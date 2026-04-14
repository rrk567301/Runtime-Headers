@class NSArray, GEOCityPickerView, IGPopupWindowController, NSComboBox, NSWindow;

@interface CalUITimeZoneCityPickerController : NSObject {
    NSWindow *tzPanel;
    GEOCityPickerView *tzView;
    NSComboBox *_comboBox;
    IGPopupWindowController *_popup;
}

@property (retain, nonatomic) NSArray *topLevelObjects;

+ (id)sharedInstance;

- (id)timeZone;
- (void).cxx_destruct;
- (void)cancelClicked:(id)a0;
- (void)okClicked:(id)a0;
- (void)_bootstrapUI;
- (void)clearDelegates;
- (id)popup;
- (BOOL)popupOnView:(id)a0;

@end
