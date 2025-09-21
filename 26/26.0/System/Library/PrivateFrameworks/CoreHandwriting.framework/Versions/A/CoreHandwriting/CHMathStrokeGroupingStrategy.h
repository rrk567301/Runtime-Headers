@class NSString;

@interface CHMathStrokeGroupingStrategy : CHStrokeGroupingStrategy {
    NSString *_strategyIdentifier;
}

- (void).cxx_destruct;
- (id)initWithStrokeProvider:(id)a0;
- (id)recognizableDrawingForStrokeGroup:(id)a0 translationVector:(struct CGVector { double x0; double x1; })a1 originalDrawing:(id *)a2 orderedStrokesIDs:(id *)a3 rescalingFactor:(double *)a4 replacementStrokeGroup:(id *)a5;
- (id)strategyIdentifier;

@end
