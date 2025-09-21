@class NSString, NSMutableDictionary, NSDictionary;

@interface IOBluetoothSerialPort : NSObject {
    NSMutableDictionary *_properties;
    NSDictionary *_serviceDictionary;
}

@property (copy) NSString *originalName;

+ (id)withProperties:(id)a0;
+ (id)withTTYName:(id)a0;
+ (id)withTTYName:(id)a0 andService:(id)a1;

- (void)setDeviceName:(id)a0;
- (void)setConnectionType:(unsigned int)a0;
- (id)deviceName;
- (BOOL)inUse;
- (void)dealloc;
- (void)setEnabled:(BOOL)a0;
- (BOOL)enabled;
- (id)init;
- (id)properties;
- (id)description;
- (id)deviceAddress;
- (unsigned int)connectionType;
- (void).cxx_destruct;
- (int)PSM;
- (void)setDeviceAddress:(id)a0;
- (BOOL)authenticationRequired;
- (void)setAuthenticationRequired:(BOOL)a0;
- (id)serialEntryName;
- (void)setAttributesFromServiceRecord:(id)a0;
- (void)setPSM:(int)a0;
- (void)setBSDPortType:(unsigned int)a0;
- (id)ttyName;
- (int)RFCOMMChannel;
- (unsigned int)bsdPortType;
- (id)deviceAddressString;
- (id)deviceServiceName;
- (BOOL)encryptionRequired;
- (id)serviceDictionary;
- (void)setDeviceServiceName:(id)a0;
- (void)setEncryptionRequired:(BOOL)a0;
- (void)setPropertiesFromDictionary:(id)a0;
- (void)setRFCOMMChannel:(int)a0;
- (void)setServiceDictionary:(id)a0;
- (void)setServiceRecordWithDefaultSerialPortSDPPlist;
- (void)setServiceRecordWithSDPPlist:(id)a0;
- (void)setShowsInNetworkPreferences:(BOOL)a0;
- (void)setTTYName:(id)a0;
- (BOOL)showsInNetworkPreferences;

@end
