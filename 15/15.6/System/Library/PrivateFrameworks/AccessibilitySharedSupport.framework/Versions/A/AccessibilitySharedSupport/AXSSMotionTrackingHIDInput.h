@class NSString, NSNumber, NSDictionary;

@interface AXSSMotionTrackingHIDInput : AXSSMotionTrackingInput

@property (copy, nonatomic) NSString *deviceUniqueID;
@property (copy, nonatomic) NSNumber *productID;
@property (copy, nonatomic) NSNumber *vendorID;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) char mfiAuthenticated;
@property (readonly, nonatomic) NSDictionary *hidMatchingDictionary;

+ (char)supportsSecureCoding;
+ (id)motionTrackingHIDInputWithDevice:(id)a0;

- (id)description;
- (id)name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)uniqueIdentifier;
- (id)plistDictionary;
- (id)initWithPlistDictionary:(id)a0;
- (id)initWithDeviceUniqueID:(id)a0 productID:(id)a1 vendorID:(id)a2 deviceName:(id)a3 mfiAuthenticated:(char)a4;
- (char)isHIDDevice;
- (char)supportsExpressions;
- (unsigned long long)trackingType;

@end
