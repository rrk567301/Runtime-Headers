@interface IOBluetoothConcreteDeviceSelectorController : IOBluetoothConcreteDeviceController {
    id mShowAdvancedButton;
    id mBTAddrTextBox;
    id mPerformSDPCheck;
}

- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)windowNibName;
- (void)handleSelectButton:(id)a0;
- (id)getWindowFrameName;
- (struct OpaqueIOBluetoothObjectRef { } *)getDeviceSelectorControllerRef;
- (void)showBTAddrView:(id)a0;

@end
