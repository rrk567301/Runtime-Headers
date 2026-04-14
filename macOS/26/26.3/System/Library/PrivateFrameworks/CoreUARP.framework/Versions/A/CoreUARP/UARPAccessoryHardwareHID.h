@class NSMutableSet;

@interface UARPAccessoryHardwareHID : UARPAccessoryHardwareID {
    NSMutableSet *_personalities;
}

@property (readonly) unsigned short vendorID;
@property (readonly) unsigned short productID;

- (BOOL)doesMatchVendorID:(unsigned short)a0 productID:(unsigned short)a1;
- (id)description;
- (id)init;
- (void)addPersonality:(id)a0;
- (void).cxx_destruct;
- (id)initWithVendorID:(unsigned short)a0 productID:(unsigned short)a1;
- (BOOL)isEqual:(id)a0;
- (id)personalities;

@end
