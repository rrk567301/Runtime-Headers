@interface AVCamera : NSObject {
    unsigned int _deviceID;
}

+ (unsigned int)deviceIDForUID:(id)a0;
+ (id)cameraList;
+ (id)UIDforDeviceID:(unsigned int)a0;

- (id)description;
- (id)displayName;
- (BOOL)isSuspended;
- (unsigned int)deviceID;
- (id)GUID;
- (unsigned int)cameraType;
- (BOOL)cameraSupportsWidth:(int)a0 height:(int)a1;
- (id)initWithCMIODeviceID:(unsigned int)a0;
- (BOOL)isWidescreen;
- (BOOL)isIrisOpen;
- (BOOL)isWVGA;
- (BOOL)is1080HD;

@end
