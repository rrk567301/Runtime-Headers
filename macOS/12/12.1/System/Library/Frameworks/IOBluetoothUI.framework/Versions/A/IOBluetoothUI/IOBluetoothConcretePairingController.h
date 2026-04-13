@class NSTextField, NSString, IOBluetoothDevice, IOBluetoothDevicePair;

@interface IOBluetoothConcretePairingController : IOBluetoothConcreteDeviceController <NSTextFieldDelegate> {
    id pinCodeDeviceNameField;
    id pinCodeRequestPanel;
    id pinCodeRespondButton;
    NSTextField *pinCodeResponseField;
    id otherAppsPanel;
    id otherAppsPanelBR;
    id useForAB;
    id useForDUN;
    id useForABPreBR;
    id useForDUNPreBR;
    id useForBladeRunner;
    unsigned char mPINCodeSheetState;
    unsigned char mNextState;
    IOBluetoothDevice *mPairedDevice;
    IOBluetoothDevicePair *mDevicePair;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)windowWillClose:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (id)windowNibName;
- (void)setPairedDevice:(id)a0;
- (void)sdpQueryComplete:(id)a0 status:(int)a1;
- (void)devicePairingStarted:(id)a0;
- (void)devicePairingConnecting:(id)a0;
- (void)devicePairingPINCodeRequest:(id)a0;
- (void)devicePairingFinished:(id)a0 error:(int)a1;
- (void)handleSelectButton:(id)a0;
- (long long)runModal:(BOOL)a0;
- (id)getWindowFrameName;
- (void)validationComplete:(id)a0;
- (void)handleCancelButton:(id)a0;
- (void)checkFirstTimeConfig;
- (void)startDevicePairing:(id)a0;
- (void)addPairedDeviceToAddressBook;
- (void)addPairedDeviceToModemPort;
- (void)pairingFailed:(BOOL)a0;
- (void)handlePairingResponseButton:(id)a0;
- (void)handlePairingCancelButton:(id)a0;
- (void)handleOtherAppsButtonBR:(id)a0;
- (void)handleOtherAppsButton:(id)a0;
- (void)handleOtherAppsCancelButton:(id)a0;

@end
