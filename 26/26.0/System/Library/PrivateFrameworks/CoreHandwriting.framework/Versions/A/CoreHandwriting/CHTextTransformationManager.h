@class NSMutableArray, NSArray, NSSet, CHTransformationParameters, CHContextualTextResults, CHStrokeGroupingResult, CHStrokeClassificationResult;
@protocol CHStrokeProvider;

@interface CHTextTransformationManager : NSObject {
    BOOL _shouldExtractFromRefinablePath;
}

@property (retain) NSArray *contextStrokes;
@property (retain) CHTransformationParameters *transformationParameters;
@property (retain) CHContextualTextResults *contextResults;
@property (retain) NSSet *excludedStrokeTypes;
@property (retain) id<CHStrokeProvider> strokeProvider;
@property (retain) CHStrokeGroupingResult *strokeGroupingResult;
@property (retain) CHStrokeClassificationResult *strokeClassificationResult;
@property (retain) NSMutableArray *correctionAngles;
@property (retain) NSArray *relatedNonTextStrokes;
@property (nonatomic) BOOL usingInsertionPoint;
@property (retain) NSArray *initialStrokes;

+ (void)adjustLineSpacingWithBaselines:(id)a0 lineSpace:(unsigned long long)a1;
+ (void)adjustLineSpacingWithBounds:(id)a0 lineSpace:(unsigned long long)a1;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })adjustTransformForAnchorPoint:(struct CGPoint { double x0; double x1; })a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
+ (void)applyAlignmentToTextLines:(id)a0 alignmentBehavior:(unsigned long long)a1 leftMargin:(unsigned long long)a2 rightMargin:(unsigned long long)a3 alignFirstLine:(BOOL)a4;
+ (void)applyLineSpacingToTextLines:(id)a0 lineSpaceBehavior:(unsigned long long)a1 lineSpaceTarget:(unsigned long long)a2 linesAreParallel:(BOOL)a3;
+ (id)applyMergeToTextLines:(id)a0 alignmentBehavior:(unsigned long long)a1 leftMargin:(unsigned long long)a2 rightMargin:(unsigned long long)a3 insertionPoint:(struct CGPoint { double x0; double x1; })a4;
+ (void)applyOrientationToTextLines:(id)a0 orientationBehavior:(unsigned long long)a1 orientationTarget:(double)a2;
+ (void)applyResizeToTextLines:(id)a0 resizeBehavior:(unsigned long long)a1 resizeTarget:(unsigned long long)a2 resizeModifier:(double)a3;
+ (id)applyWrapToTextLines:(id)a0 lineSpaceBehavior:(unsigned long long)a1 alignmentBehavior:(unsigned long long)a2 leftMargin:(unsigned long long)a3 rightMargin:(unsigned long long)a4 insertionPoint:(struct CGPoint { double x0; double x1; })a5;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })getInsertSpaceTransform:(id)a0 spaceSize:(double)a1;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })getItalicsTransformForTextLine:(id)a0 skew:(double)a1;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })getResizeTransformForTextLine:(id)a0 targetSize:(id)a1;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })getTranslateTransformForAnchorPoint:(struct CGPoint { double x0; double x1; })a0 targetPoint:(struct CGPoint { double x0; double x1; })a1;
+ (id)mergeReflowableTokens:(id)a0;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })rotationTransformForTextLine:(id)a0 targetAngle:(double)a1;
+ (id)splitTextLine:(id)a0 maxLength:(double)a1;
+ (id /* block */)textStrokePointTransformationFromAffineTransformation:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForInsertingToken:(id)a0 inLineWithTokens:(id)a1;
+ (void)transformTextLines:(id)a0 withParameters:(id)a1;

- (void).cxx_destruct;
- (id)_transformedTextLinesWithCancel:(id /* block */)a0 skipLineOrientationEstimate:(BOOL)a1 useCache:(BOOL)a2 progress:(id)a3;
- (id)createTelemetryDictionary:(double)a0 nonTextRatio:(double)a1;
- (id)initWithContextStrokes:(id)a0 relatedNonTextStrokes:(id)a1 contextResults:(id)a2 strokeGroupingResult:(id)a3 strokeClassificationResult:(id)a4 strokeProvider:(id)a5 excludedStrokeTypes:(id)a6 extractFromRefinablePath:(BOOL)a7;
- (id)initWithContextStrokes:(id)a0 relatedNonTextStrokes:(id)a1 parameters:(id)a2 contextResults:(id)a3 strokeGroupingResult:(id)a4 strokeClassificationResult:(id)a5 strokeProvider:(id)a6 excludedStrokeTypes:(id)a7 extractFromRefinablePath:(BOOL)a8;
- (id)initWithContextStrokes:(id)a0 relatedNonTextStrokes:(id)a1 parameters:(id)a2 contextResults:(id)a3 strokeGroupingResult:(id)a4 strokeClassificationResult:(id)a5 strokeProvider:(id)a6 excludedStrokeTypes:(id)a7 extractFromRefinablePath:(BOOL)a8 initialStrokes:(id)a9;
- (id)meanRotationCorrectionAngle;
- (id)numCharacters;
- (struct CHTextTransformationResult { id x0; id x1; id x2; })transformWithProgress:(id)a0 shouldCancel:(id /* block */)a1;

@end
