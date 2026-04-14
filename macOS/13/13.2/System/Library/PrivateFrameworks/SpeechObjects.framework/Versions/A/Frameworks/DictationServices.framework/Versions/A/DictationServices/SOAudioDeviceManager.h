@class NSMutableArray;

@interface SOAudioDeviceManager : NSObject {
    NSMutableArray *_inputDevices;
    unsigned int _inputDev;
    struct IONotificationPort { } *_notificationPort;
    unsigned int _serviceNotification;
}

@property (nonatomic) BOOL isClamShellModeOn;

+ (id)sharedAudioDeviceManager;

- (void)dealloc;
- (id)init;
- (id)inputSources;
- (id)inputDevices;
- (id)defaultInputDevice;
- (id)inputDeviceWithIdentifier:(id)a0;
- (void)beginMonitoringInputDeviceWithIdentifier:(id)a0;
- (void)monitorDeviceVolume:(id)a0 forInput:(BOOL)a1;
- (void)rescanAudioDevices;
- (id)inputDeviceWithDeviceID:(unsigned int)a0;
- (void)setDevice:(id)a0 forCategory:(unsigned int)a1;
- (id)deviceForCategory:(unsigned int)a0;
- (unsigned long long)indexOfDeviceForCategory:(unsigned int)a0 inArray:(id)a1;
- (void)setDefaultInputDevice:(id)a0;
- (void)syncDeviceSettings:(id)a0;
- (void)postMessage:(id)a0;
- (void)postHardwareMessage:(id)a0;
- (void)postSourceChanged:(id)a0;

@end
