@class MKAnnotationView;

@interface MKCalloutView : NSView

@property (readonly, weak, nonatomic) MKAnnotationView *annotationView;
@property (readonly, nonatomic) long long anchorPosition;
@property (readonly, nonatomic, getter=isVisible) char visible;
@property (readonly, nonatomic) char hasPendingVisibility;
@property (readonly, nonatomic, getter=isLeftAnchored) char leftAnchored;
@property (nonatomic) char parallaxEnabled;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)annotationViewFrameDidChange;
- (void)dismissAnimated:(char)a0 completionBlock:(id /* block */)a1;
- (id)initWithAnnotationView:(id)a0;
- (void)showAnimated:(char)a0 completionBlock:(id /* block */)a1;

@end
