@interface IOBluetoothConcreteDeviceSelectorController : IOBluetoothConcreteDeviceController {
    id mShowAdvancedButton;
    id mBTAddrTextBox;
    id mPerformSDPCheck;
}

- (BOOL)isKindOfClass:(Class)a0;
- (id)windowNibName;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)showBTAddrView:(id)a0;
- (struct OpaqueIOBluetoothObjectRef { } *)getDeviceSelectorControllerRef;
- (id)getWindowFrameName;
- (void)handleSelectButton:(id)a0;

@end
