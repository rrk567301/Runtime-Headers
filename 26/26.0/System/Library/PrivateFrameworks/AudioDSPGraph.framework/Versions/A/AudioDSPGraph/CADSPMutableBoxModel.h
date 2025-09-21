@class NSString;

@interface CADSPMutableBoxModel : CADSPBoxModel

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long numberOfInputs;
@property (nonatomic) unsigned long long numberOfOutputs;
@property (copy, nonatomic) NSString *className;
@property (copy, nonatomic) NSString *subsetName;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setName:(id)a0;
- (void)setClassName:(id)a0;
- (void)setNumberOfInputs:(unsigned long long)a0;
- (void)setNumberOfOutputs:(unsigned long long)a0;
- (void)setAudioComponentDescription:(const struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *)a0;
- (void)setSubsetName:(id)a0;

@end
