@class NSIndexSet;

@interface AVAudioHardwareStereoPanControl : AVAudioHardwareControl

@property (readonly, nonatomic) float value;
@property (readonly, nonatomic) NSIndexSet *channelIDs;

- (char)setValue:(float)a0 controller:(id)a1 error:(id *)a2;
- (id)valueKeys;

@end
