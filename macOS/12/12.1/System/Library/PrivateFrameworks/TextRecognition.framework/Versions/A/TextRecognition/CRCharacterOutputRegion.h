@class CRNormalizedPolyline;

@interface CRCharacterOutputRegion : CROutputRegion

@property (retain) CRNormalizedPolyline *baseline;

+ (id)characterWithTextFeature:(id)a0 candidateIdx:(long long)a1 imageSize:(struct CGSize { double x0; double x1; })a2 confidenceThresholdProvider:(id)a3;
+ (id)characterWithText:(id)a0 confidence:(int)a1 quad:(id)a2 baselineAngle:(double)a3;
+ (id)characterWithTextFeature:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 confidenceThresholdProvider:(id)a2;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:(id)a0 version:(long long)a1 offset:(unsigned long long *)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(BOOL)a1 copyCandidates:(BOOL)a2;
- (id)contentBaselines;
- (BOOL)computesBoundsFromChildren;
- (BOOL)computesTranscriptFromChildren;
- (id)joiningDelimeter;

@end
