@interface NSStatusItemReplicantView : NSView

@property (copy) id /* block */ drawBlock;
@property (copy) id /* block */ shadowDrawBlock;

+ (double)inactiveAlphaForAppearance:(unsigned int)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setSnapshotImage:(id)a0 needsInactiveTemplateStyling:(BOOL)a1 appearance:(unsigned int)a2 needsShadow:(BOOL)a3;

@end
