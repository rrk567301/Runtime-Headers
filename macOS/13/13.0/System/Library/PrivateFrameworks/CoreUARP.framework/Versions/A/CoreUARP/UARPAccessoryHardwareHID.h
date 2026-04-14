@interface UARPAccessoryHardwareHID : UARPAccessoryHardwareID

@property (readonly) unsigned short vendorID;
@property (readonly) unsigned short productID;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (id)initWithVendorID:(unsigned short)a0 productID:(unsigned short)a1;

@end
