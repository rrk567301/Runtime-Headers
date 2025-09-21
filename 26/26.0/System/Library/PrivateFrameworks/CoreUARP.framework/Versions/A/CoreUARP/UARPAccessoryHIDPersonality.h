@interface UARPAccessoryHIDPersonality : NSObject

@property (readonly) unsigned short vendorID;
@property (readonly) unsigned short productID;

- (BOOL)isEqual:(id)a0;
- (id)initWithVendorID:(unsigned short)a0 productID:(unsigned short)a1;
- (unsigned long long)getHash;
- (id)personalityIdentifier:(id)a0;

@end
