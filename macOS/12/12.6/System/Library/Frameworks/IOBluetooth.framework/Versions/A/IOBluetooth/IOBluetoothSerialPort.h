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
- (void)setDeviceName:(id)a0;
- (BOOL)inUse;
- (int)PSM;
- (id)deviceAddress;
- (void)setDeviceAddress:(id)a0;
- (void)setAuthenticationRequired:(BOOL)a0;
- (BOOL)authenticationRequired;
- (void)setConnectionType:(unsigned int)a0;
- (void)setPSM:(int)a0;
- (void)setTTYName:(id)a0;
- (id)ttyName;
- (void)setShowsInNetworkPreferences:(BOOL)a0;
- (void)setBSDPortType:(unsigned int)a0;
- (void)setServiceRecordWithDefaultSerialPortSDPPlist;
- (void)setDeviceServiceName:(id)a0;
- (void)setAttributesFromServiceRecord:(id)a0;
- (void)setPropertiesFromDictionary:(id)a0;
- (void)setServiceDictionary:(id)a0;
- (void)setEncryptionRequired:(BOOL)a0;
- (void)setRFCOMMChannel:(int)a0;
- (void)setServiceRecordWithSDPPlist:(id)a0;
- (BOOL)encryptionRequired;
- (unsigned int)bsdPortType;
- (BOOL)showsInNetworkPreferences;
- (id)serialEntryName;
- (id)deviceAddressString;
- (int)RFCOMMChannel;
- (id)deviceServiceName;
- (id)serviceDictionary;

@end
