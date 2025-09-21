@class NSString;

@interface AXSSMotionTrackingCameraInput : AXSSMotionTrackingInput

@property (copy, nonatomic) NSString *captureDeviceUniqueID;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) char isBuiltIn;
@property (nonatomic) unsigned long long trackingType;

+ (char)supportsSecureCoding;
+ (id)captureDeviceForMotionTrackingInput:(id)a0;
+ (id)motionTrackingCameraInputWithAVCaptureDevice:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)uniqueIdentifier;
- (id)plistDictionary;
- (id)initWithPlistDictionary:(id)a0;
- (id)initWithCaptureDeviceUniqueID:(id)a0 name:(id)a1 isBuiltIn:(char)a2 trackingType:(unsigned long long)a3;
- (char)isCamera;
- (char)supportsExpressions;

@end
