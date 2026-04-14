@class NSString;

@interface AXSSMotionTrackingCameraInput : AXSSMotionTrackingInput

@property (copy, nonatomic) NSString *captureDeviceUniqueID;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL isBuiltIn;
@property (nonatomic) unsigned long long trackingType;

+ (BOOL)supportsSecureCoding;
+ (id)captureDeviceForMotionTrackingInput:(id)a0;
+ (id)motionTrackingCameraInputWithAVCaptureDevice:(id)a0;

- (id)plistDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPlistDictionary:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)uniqueIdentifier;
- (void).cxx_destruct;
- (id)initWithCaptureDeviceUniqueID:(id)a0 name:(id)a1 isBuiltIn:(BOOL)a2 trackingType:(unsigned long long)a3;
- (BOOL)isCamera;
- (BOOL)supportsExpressions;

@end
