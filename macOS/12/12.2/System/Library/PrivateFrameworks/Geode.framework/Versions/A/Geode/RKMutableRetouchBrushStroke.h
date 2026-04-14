@class NSArray;

@interface RKMutableRetouchBrushStroke : RKRetouchBrushStroke {
    id /* block */ _updateSourcePointBlock;
    id /* block */ _updateDetectedEdgesBlock;
    id /* block */ _errorHandlingBlock;
}

@property (nonatomic) BOOL hasSource;
@property (nonatomic) BOOL closed;
@property (nonatomic) struct CGPoint { double x0; double x1; } sourceOffset;
@property (nonatomic) float opacity;
@property (nonatomic) BOOL edgeDetectionPerformed;
@property (retain, nonatomic) NSArray *detectedEdges;

- (void)dealloc;
- (void)appendPoint:(struct { struct CGPoint { double x0; double x1; } x0; float x1; })a0;
- (void)setHasSource:(BOOL)a0;
- (void)applyTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)offsetPoints:(struct CGPoint { double x0; double x1; })a0;
- (void)setDetectedEdges:(id)a0;
- (void)setUpdateSourcePointBlock:(id /* block */)a0;
- (void)setUpdateDetectedEdgesBlock:(id /* block */)a0;
- (void)setErrorHandlingBlock:(id /* block */)a0;
- (void)errorOccurredProcessingStroke;

@end
