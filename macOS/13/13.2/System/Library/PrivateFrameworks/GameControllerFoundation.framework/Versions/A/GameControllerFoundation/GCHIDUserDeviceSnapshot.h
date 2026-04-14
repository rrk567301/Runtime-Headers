@class NSArray;

@interface GCHIDUserDeviceSnapshot : GCHIDDeviceSnapshot

@property (readonly) NSArray *elements;

+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithHIDDevice:(id)a0;

@end
