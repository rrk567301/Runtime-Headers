@interface UARPAccessoryHardwareB2PHID : UARPAccessoryHardwareID

@property (readonly) unsigned short vendorID;
@property (readonly) unsigned short productID;

- (id)init;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithVendorID:(unsigned short)a0 productID:(unsigned short)a1;

@end
