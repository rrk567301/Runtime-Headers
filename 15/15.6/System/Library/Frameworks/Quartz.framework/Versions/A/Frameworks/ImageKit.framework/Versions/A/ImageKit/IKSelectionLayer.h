@class IKComposer;

@interface IKSelectionLayer : CALayer {
    IKComposer *_composer;
}

+ (double)fadeDuration;
+ (id)addSelectionLayer:(id)a0;
+ (char)registerLayerWithView:(id)a0;

- (void)dealloc;
- (char)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)clearSelection;
- (void)selectAll;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionRect;
- (void)addCursorRects;
- (struct CGImage { } *)createNewMaskedImage:(struct CGImage { } *)a0;
- (void)createSelectionWithEvent:(id)a0;
- (void)doAddSelection:(id)a0 select:(char)a1;
- (void)doRemoveSelection:(id)a0;
- (void)drawInContext:(struct CGContext { } *)a0 drawSelection:(char)a1;
- (char)ikKeyDown:(id)a0;
- (void)ikMouseDown:(id)a0;
- (void)mouseDownOutsideSelection:(id)a0;
- (void)selectLayer:(id)a0 extendSelection:(char)a1;
- (void)setSelectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup:(id)a0;
- (void)toolmodeWillChangeFrom:(long long)a0 to:(long long)a1;
- (void)willBeRemovedFromSuperlayer;

@end
