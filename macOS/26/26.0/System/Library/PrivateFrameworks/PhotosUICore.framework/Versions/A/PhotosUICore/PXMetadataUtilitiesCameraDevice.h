@class NSString, NSNumber;

@interface PXMetadataUtilitiesCameraDevice : NSObject

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSNumber *focalLength;
@property (readonly, nonatomic) NSNumber *focalLengthIn35mm;

+ (id)supportedDevices;
+ (id)cameraDeviceForDeviceName:(id)a0 camera:(long long)a1 realLensFocalLength:(id)a2 nominalLensFocalLength:(id)a3;
+ (id)cameraForFocalLength:(id)a0 deviceName:(id)a1;
+ (id)frontCameraDataForDeviceName:(id)a0;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDisplayName:(id)a0 focalLength:(id)a1 focalLengthIn35mm:(id)a2;

@end
