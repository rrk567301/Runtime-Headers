@class NSArray;

@interface FigRegWarpPPGPUTuningParams : NSObject

@property (readonly, nonatomic) unsigned int maxNumberOfPyramidLevels;
@property (readonly, nonatomic) char normalizeCornerResponse;
@property (readonly, nonatomic) char performHistEq;
@property (readonly, nonatomic) char useHalfPrecisionCornerResponse;
@property (readonly, nonatomic) NSArray *minCornerResponseThreshold;

- (void).cxx_destruct;
- (int)getMinCornerResponseThreshold:(float *)a0 forBand:(unsigned int)a1;
- (int)readPlist:(id)a0;

@end
