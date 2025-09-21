@class NSArray, NSString;

@interface VNDetectBarcodesRequestConfiguration : VNImageBasedRequestConfiguration

@property (copy, nonatomic) NSArray *symbologies;
@property (copy, nonatomic) NSString *locateMode;
@property (nonatomic) char stopAtFirstPyramidWith2DCode;
@property (nonatomic) char useMLDetector;
@property (nonatomic) char coalesceCompositeSymbologies;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithRequestClass:(Class)a0;
- (void)setDefaultSymbologiesForRevision:(unsigned long long)a0;

@end
