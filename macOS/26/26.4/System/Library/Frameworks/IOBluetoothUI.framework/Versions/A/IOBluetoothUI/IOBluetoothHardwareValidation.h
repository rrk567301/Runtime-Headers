@class NSString;

@interface IOBluetoothHardwareValidation : NSObject {
    id mNoHardarePanel;
    id mHardwareOffPanel;
    id mBTDisabledPanel;
    id mNoHWIcon;
    id mNoHWText;
    id mNoHWCancelButton;
    id mHWOffIcon;
    id mHWOffText;
    id mHWOffOkButton;
    id mHWOffCancelButton;
    id mBTDisabledText;
    id mBTDisabledCancelButton;
    NSString *mCancelText;
}

- (void)windowWillClose:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)handleButtonAction:(id)a0;
- (int)runModalWithUserSettings:(id)a0 description:(id)a1;

@end
