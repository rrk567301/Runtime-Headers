@interface AVCamera : NSObject {
    unsigned int _deviceID;
}

+ (unsigned int)deviceIDForUID:(id)a0;
+ (id)UIDforDeviceID:(unsigned int)a0;
+ (id)cameraList;

- (unsigned int)cameraType;
- (id)GUID;
- (id)displayName;
- (BOOL)isSuspended;
- (id)description;
- (unsigned int)deviceID;
- (BOOL)cameraSupportsWidth:(int)a0 height:(int)a1;
- (id)initWithCMIODeviceID:(unsigned int)a0;
- (BOOL)is1080HD;
- (BOOL)isIrisOpen;
- (BOOL)isMinimumFrameRateSupportedForStreamID:(unsigned int)a0 withFormatDescriptor:(struct opaqueCMFormatDescription { } *)a1;
- (BOOL)isWVGA;
- (BOOL)isWidescreen;

@end
