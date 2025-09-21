@class NSMutableSet;

@interface UARPAccessoryHardwareHID : UARPAccessoryHardwareID {
    NSMutableSet *_personalities;
}

@property (readonly) unsigned short vendorID;
@property (readonly) unsigned short productID;

- (void)addPersonality:(id)a0;
- (BOOL)doesMatchVendorID:(unsigned short)a0 productID:(unsigned short)a1;
- (id)init;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithVendorID:(unsigned short)a0 productID:(unsigned short)a1;
- (void).cxx_destruct;
- (id)personalities;

@end
