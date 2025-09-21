@class NSString;

@interface CADSPMutableInjectorTapPointModel : CADSPInjectorTapPointModel

@property (copy, nonatomic) NSString *audioFilePath;
@property (copy, nonatomic) NSString *boxName;
@property (nonatomic) unsigned int portIndex;
@property (nonatomic) unsigned int options;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setOptions:(unsigned int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAudioFilePath:(id)a0;
- (void)setBoxName:(id)a0;
- (void)setPortIndex:(unsigned int)a0;

@end
