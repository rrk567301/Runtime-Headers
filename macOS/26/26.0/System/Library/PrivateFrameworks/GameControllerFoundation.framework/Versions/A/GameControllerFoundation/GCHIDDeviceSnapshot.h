@class NSArray, NSString, NSNumber;

@interface GCHIDDeviceSnapshot : NSObject <GCHIDDeviceAttributes, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *elements;
@property (readonly) NSString *transport;
@property (readonly) NSNumber *vendorID;
@property (readonly) NSNumber *productID;
@property (readonly) NSNumber *versionNumber;
@property (readonly) NSString *manufacturer;
@property (readonly) NSString *product;
@property (readonly) NSNumber *maxInputReportSize;
@property (readonly) NSNumber *maxOutputReportSize;
@property (readonly) NSNumber *maxFeatureReportSize;

- (id)initWithService:(unsigned int)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)valueForKey:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithHIDDevice:(id)a0;
- (id)valueForHIDDeviceKey:(id)a0;

@end
