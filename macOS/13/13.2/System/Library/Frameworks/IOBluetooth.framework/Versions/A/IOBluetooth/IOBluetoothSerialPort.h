@class NSString, NSMutableDictionary, NSDictionary;

@interface IOBluetoothSerialPort : NSObject {
    NSMutableDictionary *_properties;
    NSDictionary *_serviceDictionary;
}

@property (copy) NSString *originalName;

+ (id)withTTYName:(id)a0;
+ (id)withTTYName:(id)a0 andService:(id)a1;
+ (id)withProperties:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (BOOL)enabled;
- (unsigned int)connectionType;
- (id)deviceName;
- (id)properties;
- (BOOL)inUse;
- (void)setDeviceName:(id)a0;
- (int)PSM;
- (id)deviceAddress;
- (void)setDeviceAddress:(id)a0;
- (BOOL)authenticationRequired;
- (void)setAuthenticationRequired:(BOOL)a0;
- (void)setConnectionType:(unsigned int)a0;
- (void)setPropertiesFromDictionary:(id)a0;
- (void)setEncryptionRequired:(BOOL)a0;
- (BOOL)encryptionRequired;
- (void)setBSDPortType:(unsigned int)a0;
- (unsigned int)bsdPortType;
- (void)setShowsInNetworkPreferences:(BOOL)a0;
- (BOOL)showsInNetworkPreferences;
- (id)serialEntryName;
- (void)setTTYName:(id)a0;
- (id)ttyName;
- (id)deviceAddressString;
- (void)setDeviceServiceName:(id)a0;
- (void)setAttributesFromServiceRecord:(id)a0;
- (void)setRFCOMMChannel:(int)a0;
- (int)RFCOMMChannel;
- (void)setPSM:(int)a0;
- (id)deviceServiceName;
- (id)serviceDictionary;
- (void)setServiceDictionary:(id)a0;
- (void)setServiceRecordWithSDPPlist:(id)a0;
- (void)setServiceRecordWithDefaultSerialPortSDPPlist;

@end
