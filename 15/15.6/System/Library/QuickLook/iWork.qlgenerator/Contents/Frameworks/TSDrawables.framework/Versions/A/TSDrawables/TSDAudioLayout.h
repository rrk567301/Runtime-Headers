@class TSDMovieInfo;

@interface TSDAudioLayout : TSDMediaLayout

@property (class, readonly) struct CGSize { double x0; double x1; } scaledAudioSize;

@property (readonly, nonatomic) TSDMovieInfo *movieInfo;

- (id)initWithInfo:(id)a0;
- (int)wrapType;
- (char)allowsConnections;
- (id)layoutGeometryFromInfo;
- (char)shouldDisplayGuides;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrame;
- (char)canAspectRatioLockBeChangedByUser;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeAlignmentFrameInRoot:(char)a0;
- (char)resizeMayChangeAspectRatio;
- (char)supportsFlipping;
- (char)supportsRotation;
- (id)visibleGeometries;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForCullingWithBaseFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 additionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;

@end
