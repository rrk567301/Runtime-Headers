@interface AVAudioHardwareBooleanControl : AVAudioHardwareControl

@property (readonly, nonatomic) char value;

- (char)setValue:(char)a0 controller:(id)a1 error:(id *)a2;
- (id)valueKeys;

@end
