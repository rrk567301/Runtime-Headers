@class NSIndexSet;

@interface AVAudioHardwareStereoPanControl : AVAudioHardwareControl

@property (readonly, nonatomic) float value;
@property (readonly, nonatomic) NSIndexSet *channelIDs;

- (id)valueKeys;
- (BOOL)setValue:(float)a0 controller:(id)a1 error:(id *)a2;

@end
