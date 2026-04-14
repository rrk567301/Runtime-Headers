@class NSImage, NSString;

@interface IMKUICandidateStepperAccessoryImageView : NSView

@property (readonly, retain, nonatomic) NSImage *arrowImage;
@property (copy, nonatomic) NSString *arrowImageName;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseUp:(id)a0;

@end
