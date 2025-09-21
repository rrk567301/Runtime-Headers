@class NSString, NSMutableDictionary, NSDictionary;

@interface IOBluetoothSerialPort : NSObject {
    NSMutableDictionary *_properties;
    NSDictionary *_serviceDictionary;
}

@property (copy) NSString *originalName;

+ (id)withProperties:(id)a0;
+ (id)withTTYName:(id)a0;
+ (id)withTTYName:(id)a0 andService:(id)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (char)enabled;
- (void).cxx_destruct;
- (void)setEnabled:(char)a0;
- (unsigned int)connectionType;
- (id)properties;
- (id)deviceName;
- (void)setDeviceName:(id)a0;
- (int)PSM;
- (id)deviceAddress;
- (void)setDeviceAddress:(id)a0;
- (char)inUse;
- (char)authenticationRequired;
- (void)setAuthenticationRequired:(char)a0;
- (void)setConnectionType:(unsigned int)a0;
- (id)serialEntryName;
- (void)setAttributesFromServiceRecord:(id)a0;
- (void)setPSM:(int)a0;
- (void)setBSDPortType:(unsigned int)a0;
- (id)ttyName;
- (int)RFCOMMChannel;
- (unsigned int)bsdPortType;
- (id)deviceAddressString;
- (id)deviceServiceName;
- (char)encryptionRequired;
- (id)serviceDictionary;
- (void)setDeviceServiceName:(id)a0;
- (void)setEncryptionRequired:(char)a0;
- (void)setPropertiesFromDictionary:(id)a0;
- (void)setRFCOMMChannel:(int)a0;
- (void)setServiceDictionary:(id)a0;
- (void)setServiceRecordWithDefaultSerialPortSDPPlist;
- (void)setServiceRecordWithSDPPlist:(id)a0;
- (void)setShowsInNetworkPreferences:(char)a0;
- (void)setTTYName:(id)a0;
- (char)showsInNetworkPreferences;

@end
