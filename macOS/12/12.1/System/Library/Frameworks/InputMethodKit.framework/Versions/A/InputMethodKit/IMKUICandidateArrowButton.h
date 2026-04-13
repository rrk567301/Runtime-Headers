@class NSImage;

@interface IMKUICandidateArrowButton : NSButton

@property (retain, nonatomic) NSImage *arrowImageDown;
@property (retain, nonatomic) NSImage *arrowImageUp;
@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL pointsUpwards;

- (void).cxx_destruct;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
