@interface AVCamera : NSObject {
    unsigned int _deviceID;
}

+ (id)UIDforDeviceID:(unsigned int)a0;
+ (unsigned int)deviceIDForUID:(id)a0;
+ (id)cameraList;

- (id)description;
- (id)displayName;
- (char)isSuspended;
- (unsigned int)deviceID;
- (id)GUID;
- (unsigned int)cameraType;
- (char)cameraSupportsWidth:(int)a0 height:(int)a1;
- (id)initWithCMIODeviceID:(unsigned int)a0;
- (char)is1080HD;
- (char)isIrisOpen;
- (char)isMinimumFrameRateSupportedForStreamID:(unsigned int)a0 withFormatDescriptor:(struct opaqueCMFormatDescription { } *)a1;
- (char)isWVGA;
- (char)isWidescreen;

@end
