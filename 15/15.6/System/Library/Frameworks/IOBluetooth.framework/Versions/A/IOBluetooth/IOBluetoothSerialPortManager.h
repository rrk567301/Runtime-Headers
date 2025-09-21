@interface IOBluetoothSerialPortManager : BTClient

+ (id)sharedSerialPortManager;

- (id)init;
- (id)getBluetoothModemPortDictionary;
- (int)addPort:(id)a0;
- (char)canModifySerialPort:(id)a0;
- (id)createOutgoingSerialPortForFirstSerialServiceOnDevice:(id)a0;
- (id)createOutgoingSerialPortForFirstServiceOnDevice:(id)a0 withUUID:(unsigned short)a1;
- (int)deviceHasSerialPortServices:(id)a0 count:(int *)a1 includeRFCOMMServices:(char)a2 includeDUNServices:(char)a3;
- (id)getAllOutgoingPersistentSerialPorts:(char)a0 andIncomingPersistentSerialPorts:(char)a1 includeBluetoothModemPort:(char)a2;
- (id)getAllPersistentOutgoingSerialPortsForDevice:(id)a0;
- (id)getBSDTTYCompatibleNameForDevice:(id)a0 andServiceName:(id)a1;
- (id)getConnection;
- (id)getSerialPortWithName:(id)a0;
- (id)getUniqueSerialPortNameWithBaseString:(id)a0;
- (char)isAcceptableSerialPortName:(id)a0;
- (int)modifyPersistentSerialPort:(const char *)a0 andDict:(struct __CFDictionary { } *)a1;
- (void)removeAllSerialPortsForDevice:(id)a0;
- (int)removePort:(id)a0;
- (void)resetSerialPortCreationUniqueIndex;
- (char)serialPortExists:(id)a0;
- (int)updatePort:(id)a0 removeAndReaddIfNecessary:(char)a1;

@end
