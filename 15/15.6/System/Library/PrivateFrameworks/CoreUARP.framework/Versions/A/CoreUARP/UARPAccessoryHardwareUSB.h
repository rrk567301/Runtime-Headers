@interface UARPAccessoryHardwareUSB : UARPAccessoryHardwareID

@property (readonly) unsigned short vendorID;
@property (readonly) unsigned short productID;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (id)initWithVendorID:(unsigned short)a0 productID:(unsigned short)a1;

@end
