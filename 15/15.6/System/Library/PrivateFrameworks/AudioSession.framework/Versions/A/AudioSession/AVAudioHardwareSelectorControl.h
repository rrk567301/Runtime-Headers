@class NSArray;

@interface AVAudioHardwareSelectorControl : AVAudioHardwareControl

@property (readonly, nonatomic, getter=isMultiValue) char multiValue;
@property (readonly, nonatomic) NSArray *activeValues;
@property (readonly, nonatomic) NSArray *availableValues;

- (char)setActiveValues:(id)a0 controller:(id)a1 error:(id *)a2;
- (id)valueKeys;

@end
