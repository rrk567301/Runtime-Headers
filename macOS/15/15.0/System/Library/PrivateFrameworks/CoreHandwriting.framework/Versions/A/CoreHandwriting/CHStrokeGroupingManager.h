@class NSArray, CHRecognitionSessionResult, NSDictionary, CHGroupingModel;
@protocol CHStrokeProvider;

@interface CHStrokeGroupingManager : NSObject {
    NSDictionary *_groupingStrategiesByIdentifierForTextStrokeClasses;
}

@property (readonly, nonatomic) id<CHStrokeProvider> strokeProvider;
@property (readonly, nonatomic) CHGroupingModel *strokeGroupingModel;
@property (readonly, nonatomic) CHRecognitionSessionResult *sessionLastResult;
@property (readonly, nonatomic) NSArray *locales;
@property (readonly, nonatomic) BOOL isInlineContinuousMode;
@property (readonly, nonatomic) NSArray *textInputTargets;

+ (id)sortedGroupsBySizeDescending:(id)a0;

- (void).cxx_destruct;
- (id)initWithStrokeProvider:(id)a0 sessionLastResult:(id)a1 strokeGroupingModel:(id)a2 locales:(id)a3 isInlineContinuousMode:(BOOL)a4 inlineContinuousModeTargets:(id)a5 isMathMode:(BOOL)a6;
- (id)recognizableDrawingForStrokeGroup:(id)a0 translationVector:(struct CGVector { double x0; double x1; })a1 originalDrawing:(id *)a2 orderedStrokesIDs:(id *)a3 rescalingFactor:(double *)a4 replacementStrokeGroup:(id *)a5;
- (id)strokesForIdentifiers:(id)a0;
- (id)updatedGroupingResultByAddingStrokes:(id)a0 removingStrokeIdentifiers:(id)a1 orderedStrokeIdentifiers:(id)a2 strokeClassificationResult:(id)a3 cancellationBlock:(id /* block */)a4;

@end
