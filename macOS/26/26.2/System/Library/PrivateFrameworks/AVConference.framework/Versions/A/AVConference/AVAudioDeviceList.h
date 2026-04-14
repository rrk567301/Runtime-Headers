@class AVInternalDeviceList;

@interface AVAudioDeviceList : NSObject {
    AVInternalDeviceList *_internalList;
}

@property (copy, nonatomic) id /* block */ changeListener;

+ (id)defaultOutputDevice;
+ (id)currentInputDevice;
+ (id)defaultInputDevice;
+ (BOOL)setInputDevice:(id)a0;
+ (id)deviceForDeviceID:(unsigned int)a0;
+ (id)deviceForUID:(id)a0;

- (id)devices;
- (id)inputDevices;
- (id)outputDevices;
- (id)init;
- (void)dealloc;

@end
