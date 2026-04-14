@interface CRLineOutputRegion : CRCompositeOutputRegion

@property unsigned long long lineWrappingType;
@property (readonly) BOOL shouldWrapToNextLine;
@property BOOL useLineSeparatorAsLineBreak;

+ (id)lineWithTextFeature:(id)a0 subfeatureType:(unsigned long long)a1 imageSize:(struct CGSize { double x0; double x1; })a2 confidenceThresholdProvider:(id)a3 injectSpaceCharacter:(BOOL)a4;
+ (id)lineWithTextFeature:(id)a0 subfeatureType:(unsigned long long)a1 imageSize:(struct CGSize { double x0; double x1; })a2 confidenceThresholdProvider:(id)a3;
+ (id)lineWithTextFeature:(id)a0 candidateIdx:(long long)a1 subfeatureType:(unsigned long long)a2 imageSize:(struct CGSize { double x0; double x1; })a3 confidenceThresholdProvider:(id)a4 injectSpaceCharacter:(BOOL)a5;
+ (id)lineWithText:(id)a0 confidence:(int)a1 quad:(id)a2 baselineAngle:(double)a3;
+ (id)lineWithWords:(id)a0 confidence:(int)a1 quad:(id)a2 baselineAngle:(double)a3;
+ (id)lineWithCharacters:(id)a0 confidence:(int)a1 quad:(id)a2 baselineAngle:(double)a3;
+ (id)_lineWithChildren:(id)a0 confidence:(int)a1 quad:(id)a2 baselineAngle:(double)a3;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)type;
- (long long)wordCount;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:(id)a0 version:(long long)a1 offset:(unsigned long long *)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(BOOL)a1 copyCandidates:(BOOL)a2;
- (id)contentBaselines;
- (id)joiningDelimiter;

@end
