@class NSImage, NSImageView, NSString;

@interface GameCenterUI.ImageButtonView : GameCenterUI.ButtonView {
    void /* unknown type, empty encoding */ imageAlignment;
    void /* unknown type, empty encoding */ interItemSpace;
    void /* function */ accessibilityDescription;
}

@property (class, nonatomic, readonly) double defaultInterItemSpace;

@property (nonatomic, retain) NSImage *image;
@property (nonatomic, readonly) NSImageView *imageView;
@property (nonatomic, readonly) BOOL hasImage;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } textLayoutFrame;
@property (nonatomic, readonly) BOOL hasContent;
@property (nonatomic, copy) NSString *accessibilityDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (id)accessibilityTitle;
- (void).cxx_destruct;
- (void)didChangeState;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (void)updateImageViewTint;

@end
