@class NSString, NSNumber;

@interface GCHIDDevice : HIDDevice <GCHIDDeviceAttributes>

@property (readonly) NSString *transport;
@property (readonly) NSNumber *vendorID;
@property (readonly) NSNumber *productID;
@property (readonly) NSNumber *versionNumber;
@property (readonly) NSString *manufacturer;
@property (readonly) NSString *product;

- (id)debugDescription;
- (id)init;
- (id)valueForKey:(id)a0;
- (id)initWithService:(unsigned int)a0;
- (id)valueForHIDDeviceKey:(id)a0;

@end
