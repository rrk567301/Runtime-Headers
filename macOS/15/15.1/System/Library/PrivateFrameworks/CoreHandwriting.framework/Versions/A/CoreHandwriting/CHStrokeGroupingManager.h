@class NSArray, CHGroupingModel, NSDictionary;
@protocol CHStrokeProvider;

@interface CHStrokeGroupingManager : NSObject {
    NSArray *_lastOrderedStrokeIdentifiers;
    NSDictionary *_groupingStrategiesByIdentifierForTextStrokeClasses;
}

@property (readonly, nonatomic) id<CHStrokeProvider> strokeProvider;
@property (readonly, nonatomic) CHGroupingModel *strokeGroupingModel;
@property (readonly, nonatomic) NSArray *locales;
@property (readonly, nonatomic) BOOL isInlineContinuousMode;
@property (readonly, nonatomic) NSArray *textInputTargets;

+ (id)identifyStableStrokeIdentifiersUsingOrderedStrokeIdentifiers:(id)a0 prevOrderedStrokeIdentifiers:(id)a1 strokeClassificationResult:(id)a2 prevStrokeClassificationResult:(id)a3;
+ (id)mergeableStrokeGroupClustersFromSortedStrokeGroups:(id)a0;
+ (id)sortedGroupsBySizeDescending:(id)a0;

- (void).cxx_destruct;
- (id)initWithStrokeProvider:(id)a0 lastOrderedStrokeIdentifiers:(id)a1 strokeGroupingModel:(id)a2 locales:(id)a3 isInlineContinuousMode:(BOOL)a4 inlineContinuousModeTargets:(id)a5 isMathMode:(BOOL)a6;
- (id)recognizableDrawingForStrokeGroup:(id)a0 translationVector:(struct CGVector { double x0; double x1; })a1 originalDrawing:(id *)a2 orderedStrokesIDs:(id *)a3 rescalingFactor:(double *)a4 replacementStrokeGroup:(id *)a5;
- (id)strokesForIdentifiers:(id)a0;
- (id)updateGroupingResult:(id)a0 addingStrokes:(id)a1 removingStrokeIdentifiers:(id)a2 orderedStrokeIdentifiers:(id)a3 strokeClassificationResult:(id)a4 referenceStrokeClassificationResult:(id)a5 cancellationBlock:(id /* block */)a6;

@end
