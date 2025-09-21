@class NSString;

@interface CADSPMutableGraphModel : CADSPGraphModel

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned int sampleRateConversionAlgorithm;
@property (nonatomic) unsigned int sampleRateConversionQuality;
@property (nonatomic) unsigned int options;
@property (nonatomic) struct CADSPAudioSliceDuration { unsigned int x0; unsigned int x1; } sliceDuration;
@property (nonatomic) BOOL sliceDurationCanVary;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setOptions:(unsigned int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setName:(id)a0;
- (void)addProperty:(id)a0;
- (void)addPort:(id)a0;
- (void)addParameter:(id)a0;
- (void)addBox:(id)a0;
- (void)addBoxRelation:(id)a0;
- (void)setSampleRateConversionQuality:(unsigned int)a0;
- (void)addInjectorTapPoint:(id)a0;
- (void)addJack:(id)a0;
- (void)addParameterConnection:(id)a0;
- (void)addParameterWire:(id)a0;
- (void)addPropertyConnection:(id)a0;
- (void)addPropertyWire:(id)a0;
- (void)addRecorderTapPoint:(id)a0;
- (void)addSubset:(id)a0;
- (void)addWire:(id)a0;
- (void)setAudioStreamConfiguration:(const struct CADSPAudioStreamConfiguration { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *)a0 forName:(id)a1;
- (void)setSampleRateConversionAlgorithm:(unsigned int)a0;
- (void)setSliceDuration:(struct CADSPAudioSliceDuration { unsigned int x0; unsigned int x1; })a0;
- (void)setSliceDurationCanVary:(BOOL)a0;

@end
