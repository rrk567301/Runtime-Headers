@class NSString;

@interface CADSPMutableRecorderTapPointModel : CADSPRecorderTapPointModel

@property (copy, nonatomic) NSString *audioFilePath;
@property (copy, nonatomic) NSString *boxName;
@property (nonatomic) unsigned int portIndex;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAudioFilePath:(id)a0;
- (void)setBoxName:(id)a0;
- (void)setPortIndex:(unsigned int)a0;

@end
