@interface TSDCounterRotateLayout : TSDContainerLayout <TSDWrappableParent>

- (struct CGSize { double x0; double x1; })minimumSize;
- (id)descendentWrappables;
- (id)reliedOnLayouts;
- (id)additionalDependenciesForChildLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForStandardKnobs;
- (char)supportsFlipping;
- (id)visibleGeometries;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })baseFrameForFrameForCullingWithAdditionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (char)descendentWrappablesContainsWrappable:(id)a0;

@end
