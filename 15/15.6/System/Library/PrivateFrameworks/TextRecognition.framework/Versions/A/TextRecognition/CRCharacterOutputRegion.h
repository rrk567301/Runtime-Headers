@class CRNormalizedPolyline;

@interface CRCharacterOutputRegion : CROutputRegion {
    CRNormalizedPolyline *_baseline;
}

+ (id)characterWithTextFeature:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 confidenceThresholdProvider:(id)a2;
+ (id)characterWithText:(id)a0 confidence:(unsigned long long)a1 quad:(id)a2 baselineAngle:(double)a3;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (char)computesBoundsFromChildren;
- (char)computesNumberOfLinesFromChildren;
- (char)computesTranscriptFromChildren;
- (id)contentBaselines;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(char)a1 copyCandidates:(char)a2 deepCopy:(char)a3;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:(id)a0 version:(long long)a1 offset:(unsigned long long *)a2;
- (id)joiningDelimiter;

@end
