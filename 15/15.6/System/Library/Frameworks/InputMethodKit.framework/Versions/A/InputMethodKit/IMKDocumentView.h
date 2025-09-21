@interface IMKDocumentView : NSView

@property (nonatomic) struct CGPoint { double x; double y; } highestPoints;
@property (nonatomic) long long layoutOrientation;
@property (nonatomic) char hasRubberbandEffect;
@property (nonatomic) double scrollingIncrements;

+ (char)isCompatibleWithResponsiveScrolling;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustScroll:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
