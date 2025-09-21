@class NSString;

@interface CADSPMutableWireModel : CADSPWireModel

@property (copy, nonatomic) NSString *audioStreamConfigurationName;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAudioStreamConfiguration:(const struct CADSPAudioStreamConfiguration { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *)a0;
- (void)setAudioStreamConfigurationName:(id)a0;
- (void)setBoxName:(id)a0 ofEndpoint:(unsigned int)a1;
- (void)setPortIndex:(unsigned int)a0 ofEndpoint:(unsigned int)a1;

@end
