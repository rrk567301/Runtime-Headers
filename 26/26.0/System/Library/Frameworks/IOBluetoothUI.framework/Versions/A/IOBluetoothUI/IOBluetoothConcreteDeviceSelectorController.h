@interface IOBluetoothConcreteDeviceSelectorController : IOBluetoothConcreteDeviceController {
    id mShowAdvancedButton;
    id mBTAddrTextBox;
    id mPerformSDPCheck;
}

- (id)windowNibName;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)showBTAddrView:(id)a0;
- (struct OpaqueIOBluetoothObjectRef { } *)getDeviceSelectorControllerRef;
- (id)getWindowFrameName;
- (void)handleSelectButton:(id)a0;

@end
