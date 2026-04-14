@class AVInternalDeviceList;

@interface AVAudioDeviceList : NSObject {
    AVInternalDeviceList *_internalList;
}

@property (copy, nonatomic) id /* block */ changeListener;

+ (id)defaultOutputDevice;
+ (id)defaultInputDevice;
+ (id)currentInputDevice;
+ (BOOL)setInputDevice:(id)a0;
+ (id)deviceForDeviceID:(unsigned int)a0;
+ (id)deviceForUID:(id)a0;

- (id)devices;
- (id)outputDevices;
- (id)inputDevices;
- (void)dealloc;
- (id)init;

@end
