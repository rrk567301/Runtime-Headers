@class NSArray;

@interface AVAudioHardwareSelectorControl : AVAudioHardwareControl

@property (readonly, nonatomic, getter=isMultiValue) BOOL multiValue;
@property (readonly, nonatomic) NSArray *activeValues;
@property (readonly, nonatomic) NSArray *availableValues;

- (id)valueKeys;
- (BOOL)setActiveValues:(id)a0 controller:(id)a1 error:(id *)a2;

@end
