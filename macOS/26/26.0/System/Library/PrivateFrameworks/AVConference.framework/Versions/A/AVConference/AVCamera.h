@interface AVCamera : NSObject {
    unsigned int _deviceID;
}

+ (id)UIDforDeviceID:(unsigned int)a0;
+ (unsigned int)deviceIDForUID:(id)a0;
+ (id)cameraList;

- (id)GUID;
- (BOOL)isSuspended;
- (id)displayName;
- (unsigned int)deviceID;
- (id)description;
- (unsigned int)cameraType;
- (BOOL)cameraSupportsWidth:(int)a0 height:(int)a1;
- (id)initWithCMIODeviceID:(unsigned int)a0;
- (BOOL)is1080HD;
- (BOOL)isIrisOpen;
- (BOOL)isMinimumFrameRateSupportedForStreamID:(unsigned int)a0 withFormatDescriptor:(struct opaqueCMFormatDescription { } *)a1;
- (BOOL)isWVGA;
- (BOOL)isWidescreen;

@end
