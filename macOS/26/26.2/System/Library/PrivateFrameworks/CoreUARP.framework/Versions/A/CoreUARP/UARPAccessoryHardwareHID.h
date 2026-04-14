@class NSMutableSet;

@interface UARPAccessoryHardwareHID : UARPAccessoryHardwareID {
    NSMutableSet *_personalities;
}

@property (readonly) unsigned short vendorID;
@property (readonly) unsigned short productID;

- (BOOL)isEqual:(id)a0;
- (void)addPersonality:(id)a0;
- (BOOL)doesMatchVendorID:(unsigned short)a0 productID:(unsigned short)a1;
- (void).cxx_destruct;
- (id)description;
- (id)personalities;
- (id)initWithVendorID:(unsigned short)a0 productID:(unsigned short)a1;
- (id)init;

@end
