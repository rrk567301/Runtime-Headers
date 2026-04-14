@interface HDAAudioEngineUserClient : HDAUserClient

+ (id)audioEngineUserClientForInternalMicrophone;
+ (id)audioEngineUserClientForExternalMicrophone;
+ (id)audioEngineUserClientForSpeakers;
+ (id)audioEngineUserClientForHeadphones;
+ (id)audioEngineUserClientForLineOut;
+ (id)audioEngineUserClientForLineIn;
+ (id)audioEngineUserClientForSPDIFIn;
+ (id)audioEngineUserClientForSPDIFOut;
+ (id)audioEngineUserClientForDeviceType:(unsigned long long)a0;

- (BOOL)resetDSPToPropertyListWithError:(id *)a0;
- (BOOL)isPort:(unsigned int)a0 present:(BOOL *)a1 withError:(id *)a2;
- (BOOL)getMinimumDBValue:(float *)a0 maximumDBValue:(float *)a1 minimumControlValue:(unsigned int *)a2 maximumControlValue:(unsigned int *)a3 currentControlValue:(unsigned int *)a4 andMaximumBootBeepValue:(unsigned int *)a5 withError:(id *)a6;
- (BOOL)setHardwareVolume:(unsigned char)a0 withError:(id *)a1;
- (id)activeSpatialChannelsWithError:(id *)a0;
- (BOOL)getIsAudioSnoopMasterEnabled:(BOOL *)a0 startEnqueue:(BOOL *)a1 andAllowWaiting:(BOOL *)a2 withError:(id *)a3;
- (BOOL)setAudioSnoopMasterEnabled:(BOOL)a0 startEnqueue:(BOOL)a1 andAllowWaiting:(BOOL)a2 withError:(id *)a3;
- (BOOL)setSpatialChannel:(unsigned int)a0 mute:(BOOL)a1 withError:(id *)a2;

@end
