@class PLAudioAgent, NSDate;

@interface AudioDevice : NSObject

@property (weak, nonatomic) PLAudioAgent *ctx;
@property (nonatomic) unsigned int deviceID;
@property (nonatomic) unsigned int sourceID;
@property (nonatomic) unsigned int transType;
@property (nonatomic) char isInput;
@property (nonatomic) char isRunning;
@property (nonatomic) float volume;
@property (copy, nonatomic) id /* block */ audioPropertyHandlerBlock;
@property (nonatomic) char isDirty;
@property (retain) NSDate *lastUpdateTime;

- (void).cxx_destruct;
- (void)addAudioDeviceListener;
- (void)cleanAndUpdateDeviceInfo;
- (void)flushAndUpdateDeviceInfoWithBlock:(id /* block */)a0;
- (char)getAudioDeviceIsMute;
- (char)getAudioDeviceIsRunningSomewhere;
- (unsigned int)getAudioDeviceSource;
- (unsigned int)getAudioDeviceTransportType;
- (float)getAudioDeviceVolume;
- (void)handleAudioDevicePropertyChange:(unsigned int)a0 addresses:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a1;
- (void)initAudioPropertyHandler;
- (id)initInputDeviceWithCtx:(id)a0;
- (id)initOutputDeviceWithCtx:(id)a0;
- (void)removeAudioDeviceListener;
- (char)updateDefaultAudioDeviceInfo;

@end
