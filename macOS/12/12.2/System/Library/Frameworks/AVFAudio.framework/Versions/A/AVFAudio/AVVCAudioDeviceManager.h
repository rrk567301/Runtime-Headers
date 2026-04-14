@interface AVVCAudioDeviceManager : NSObject {
    void *_impl;
}

@property (readonly) unsigned int inputDeviceID;
@property (readonly) unsigned int outputDeviceID;

+ (BOOL)IsAOPDevicePresent;
+ (void)GetDevicesForActivationMode:(long long)a0 outRecordDevice:(unsigned int *)a1 outPlaybackDevice:(unsigned int *)a2;
+ (BOOL)isDeviceMuted:(unsigned int)a0;
+ (void)setMute:(BOOL)a0 onDevice:(unsigned int)a1;
+ (float)gainOnDevice:(unsigned int)a0;
+ (void)setGain:(float)a0 onDevice:(unsigned int)a1;
+ (BOOL)IsDeviceBuiltIn:(id)a0;
+ (BOOL)IsHALDevice:(id)a0;
+ (id)getDeviceName:(id)a0;
+ (BOOL)IsDoAPSupportedDevice:(id)a0;
+ (id)getUUIDFromBTHALDevice:(id)a0;
+ (id)findHALDeviceUIDFromUUID:(id)a0;
+ (BOOL)IsDeviceRunningSomewhere:(id)a0;
+ (BOOL)IsDeviceRunningSomewhereElse:(id)a0;
+ (void)setClientDescriptionKind:(unsigned int)a0 onDevice:(unsigned int)a1;
+ (int)setBufferSize:(int)a0 onDevice:(id)a1;
+ (void)GetHALDeviceIdentifiersForDeviceUID:(id)a0 outHALDeviceUID:(id *)a1 outPluginDeviceUUID:(id *)a2;
+ (unsigned int)GetDefaultAudioDevice:(BOOL)a0;
+ (unsigned int)GetAudioDeviceWithWiredHeadset:(BOOL)a0;
+ (unsigned int)GetAudioDeviceBuiltInMicrophone;
+ (unsigned int)GetBuiltInAudioSpeakerDevice;
+ (unsigned int)GetAOPDeviceID;
+ (void)UpdateAOPDeviceID;
+ (id)GetAOPDeviceAggregateUID;
+ (unsigned int)GetAOPDeviceAggregateID;
+ (void)ResetAOPAggregateDevice;
+ (BOOL)GetHALDeviceForBuiltInDevice:(id)a0 outHALDeviceID:(unsigned int *)a1 outHALDeviceUID:(id *)a2;
+ (unsigned int)GetNumberOfInputChannels;
+ (void)suppressRecordingIndicator:(unsigned int)a0;

- (void)dealloc;
- (id)init;
- (id)initWithActivationContext:(id)a0;
- (void)selectDeviceForActivationMode:(id)a0;

@end
