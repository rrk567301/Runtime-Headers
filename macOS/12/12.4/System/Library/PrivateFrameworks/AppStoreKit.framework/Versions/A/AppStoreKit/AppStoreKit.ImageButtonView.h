@class NSImage, NSString;

@interface AppStoreKit.ImageButtonView : AppStoreKit.ButtonView {
    void /* unknown type, empty encoding */ imageAlignment;
    void /* unknown type, empty encoding */ interItemSpace;
    void /* unknown type, empty encoding */ accessibilityDescription;
}

@property (class, nonatomic, readonly) double defaultInterItemSpace;

@property (nonatomic, retain) NSImage *image;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ imageView;
@property (nonatomic, readonly) BOOL hasImage;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } textLayoutFrame;
@property (nonatomic, readonly) BOOL hasContent;
@property (nonatomic, copy) NSString *accessibilityDescription;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityTitle;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (void)didChangeState;
- (void)updateImageViewTint;

@end
