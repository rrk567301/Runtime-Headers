@class NSString, CABackdropLayer;

@interface BackdropView : NSView {
    CABackdropLayer *_backdropLayer;
}

@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) double cornerRadius;
@property (copy, nonatomic) NSString *cornerCurve;
@property (nonatomic) BOOL windowServerAware;
@property (nonatomic) BOOL captureOnly;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)makeBackingLayer;
- (void)_commonBackdropViewInit;

@end
