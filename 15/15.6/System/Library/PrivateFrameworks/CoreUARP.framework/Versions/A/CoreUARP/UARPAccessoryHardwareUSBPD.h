@interface UARPAccessoryHardwareUSBPD : UARPAccessoryHardwareID {
    long long _usbpdClass;
}

@property (readonly) unsigned short vendorID;
@property (readonly) unsigned short productID;
@property (readonly) long long location;
@property (readonly) char isMagSafeCable;
@property (readonly) char isPowerAdapter;
@property (readonly) char isUSBCLightning;
@property (readonly) char supportsAccMode7;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (id)initWithVendorID:(unsigned short)a0 productID:(unsigned short)a1;
- (id)initWithVendorID:(unsigned short)a0 productID:(unsigned short)a1 usbpdClass:(long long)a2 locationType:(long long)a3;
- (id)initWithVendorID:(unsigned short)a0 productID:(unsigned short)a1 usbpdClass:(long long)a2 locationType:(long long)a3 supportsAccMode7:(char)a4;

@end
