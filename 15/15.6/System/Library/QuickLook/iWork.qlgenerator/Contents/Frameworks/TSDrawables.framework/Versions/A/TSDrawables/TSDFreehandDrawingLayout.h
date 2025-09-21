@class TSDFreehandDrawingInfo;

@interface TSDFreehandDrawingLayout : TSDGroupLayout

@property (nonatomic) double p_dynamicOpacity;
@property (nonatomic, getter=p_isUpdatingOpacity) char p_updatingOpacity;
@property (readonly, nonatomic) double i_scaleForInlineClampingChildLayouts;
@property (readonly, nonatomic) TSDFreehandDrawingInfo *freehandInfo;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameForMovieExport;
@property (readonly, nonatomic) char shouldSpacerShapeProvideSpace;
@property (readonly, nonatomic) double opacity;

- (id)initWithInfo:(id)a0;
- (struct CGSize { double x0; double x1; })minimumSize;
- (id)computeLayoutGeometry;
- (id)descendentWrappables;
- (id)layoutGeometryFromInfo;
- (void)processChangedProperty:(int)a0;
- (id)additionalDependenciesForChildLayout:(id)a0;
- (char)shouldSnapWhileResizing;
- (char)descendentWrappablesContainsWrappable:(id)a0;
- (id)childInfosForChildLayouts;
- (id)childrenForPencilAnnotations;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrameForCaptionEdgeInsetsCalculation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeBoundsForStandardKnobs;
- (id)p_sizeEnforcingChild;
- (void)transferLayoutGeometryToInfo:(id)a0 withAdditionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 assertIfInDocument:(char)a2;

@end
