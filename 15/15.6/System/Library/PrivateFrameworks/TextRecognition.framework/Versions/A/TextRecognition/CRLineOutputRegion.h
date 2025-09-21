@class NSUUID, CRDetectedLineRegion, NSString, NSLocale, CRNormalizedQuad;

@interface CRLineOutputRegion : CRCompositeOutputRegion <CRLineWrappable>

@property (retain, nonatomic) CRDetectedLineRegion *detectedLineRegion;
@property (readonly) char shouldWrapToNextLine;
@property char useLineSeparatorAsLineBreak;
@property unsigned long long lineWrappingType;
@property (readonly) NSLocale *locale;
@property (readonly) NSUUID *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *text;
@property (readonly) unsigned long long textRegionType;
@property (readonly) unsigned long long layoutDirection;
@property (readonly) CRNormalizedQuad *boundingQuad;

+ (id)lineWithCharacters:(id)a0 confidence:(unsigned long long)a1 quad:(id)a2 baselineAngle:(double)a3;
+ (id)lineWithDetectedRegion:(id)a0;
+ (id)lineWithText:(id)a0 confidence:(unsigned long long)a1 quad:(id)a2 baselineAngle:(double)a3;
+ (id)lineWithTextFeature:(id)a0 subfeatureType:(unsigned long long)a1 imageSize:(struct CGSize { double x0; double x1; })a2 confidenceThresholdProvider:(id)a3;
+ (id)lineWithTextFeature:(id)a0 subfeatureType:(unsigned long long)a1 imageSize:(struct CGSize { double x0; double x1; })a2 confidenceThresholdProvider:(id)a3 injectSpaceCharacter:(char)a4;
+ (id)lineWithTextRegion:(id)a0 confidenceThresholdProvider:(id)a1 injectSpaceCharacter:(char)a2;
+ (id)lineWithWords:(id)a0 confidence:(unsigned long long)a1 quad:(id)a2 baselineAngle:(double)a3;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (long long)wordCount;
- (double)confidenceScore;
- (unsigned long long)textType;
- (void)mergeWithLine:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingBoxEstimateAfterTrimmingCharacters:(id)a0;
- (char)computesNumberOfLinesFromChildren;
- (id)contentBaselines;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(char)a1 copyCandidates:(char)a2 deepCopy:(char)a3;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:(id)a0 version:(long long)a1 offset:(unsigned long long *)a2;
- (id)initWithConfidence:(unsigned long long)a0 baselineAngle:(double)a1;
- (id)joiningDelimiter;
- (unsigned long long)nmsOutputScale;
- (id)scriptCategoryResults;
- (id)sequenceScriptOutputResult;

@end
