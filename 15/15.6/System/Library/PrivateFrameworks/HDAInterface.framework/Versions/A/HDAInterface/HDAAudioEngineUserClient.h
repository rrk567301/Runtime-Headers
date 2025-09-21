@interface HDAAudioEngineUserClient : HDAUserClient

+ (id)audioEngineUserClientForSPDIFIn;
+ (id)audioEngineUserClientForLineOut;
+ (id)audioEngineUserClientForDeviceType:(unsigned long long)a0;
+ (id)audioEngineUserClientForExternalMicrophone;
+ (id)audioEngineUserClientForHeadphones;
+ (id)audioEngineUserClientForInternalMicrophone;
+ (id)audioEngineUserClientForLineIn;
+ (id)audioEngineUserClientForSPDIFOut;
+ (id)audioEngineUserClientForSpeakers;

- (id)activeSpatialChannelsWithError:(id *)a0;
- (char)getMinimumDBValue:(float *)a0 maximumDBValue:(float *)a1 minimumControlValue:(unsigned int *)a2 maximumControlValue:(unsigned int *)a3 currentControlValue:(unsigned int *)a4 andMaximumBootBeepValue:(unsigned int *)a5 withError:(id *)a6;
- (char)getIsAudioSnoopMasterEnabled:(char *)a0 startEnqueue:(char *)a1 andAllowWaiting:(char *)a2 withError:(id *)a3;
- (char)isPort:(unsigned int)a0 present:(char *)a1 withError:(id *)a2;
- (char)resetDSPToPropertyListWithError:(id *)a0;
- (char)setAudioSnoopMasterEnabled:(char)a0 startEnqueue:(char)a1 andAllowWaiting:(char)a2 withError:(id *)a3;
- (char)setHardwareVolume:(unsigned char)a0 withError:(id *)a1;
- (char)setSpatialChannel:(unsigned int)a0 mute:(char)a1 withError:(id *)a2;

@end
