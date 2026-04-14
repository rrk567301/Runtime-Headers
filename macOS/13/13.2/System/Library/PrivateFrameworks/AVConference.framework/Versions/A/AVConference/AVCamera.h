@interface AVCamera : NSObject {
    unsigned int _deviceID;
}

+ (id)cameraList;
+ (unsigned int)deviceIDForUID:(id)a0;
+ (id)UIDforDeviceID:(unsigned int)a0;

- (id)description;
- (id)displayName;
- (BOOL)isSuspended;
- (unsigned int)deviceID;
- (id)GUID;
- (unsigned int)cameraType;
- (id)initWithCMIODeviceID:(unsigned int)a0;
- (BOOL)isIrisOpen;
- (BOOL)isWidescreen;
- (BOOL)isWVGA;
- (BOOL)is1080HD;
- (BOOL)isMinimumFrameRateSupportedForStreamID:(unsigned int)a0 withFormatDescriptor:(struct opaqueCMFormatDescription { } *)a1;
- (BOOL)cameraSupportsWidth:(int)a0 height:(int)a1;

@end
