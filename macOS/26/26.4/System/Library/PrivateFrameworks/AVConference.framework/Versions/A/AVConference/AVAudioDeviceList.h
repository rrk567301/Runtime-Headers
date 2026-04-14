@class AVInternalDeviceList;

@interface AVAudioDeviceList : NSObject {
    AVInternalDeviceList *_internalList;
}

@property (copy, nonatomic) id /* block */ changeListener;

+ (id)currentInputDevice;
+ (id)defaultInputDevice;
+ (id)defaultOutputDevice;
+ (BOOL)setInputDevice:(id)a0;
+ (id)deviceForDeviceID:(unsigned int)a0;
+ (id)deviceForUID:(id)a0;

- (id)devices;
- (id)outputDevices;
- (id)init;
- (id)inputDevices;
- (void)dealloc;

@end
