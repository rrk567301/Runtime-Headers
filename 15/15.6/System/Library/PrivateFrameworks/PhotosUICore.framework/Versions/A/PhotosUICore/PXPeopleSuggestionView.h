@class UXView, CAShapeLayer, NSDateFormatter, UXImageView, PXPersonImageRequest, UXLabel;
@protocol PXPerson;

@interface PXPeopleSuggestionView : PXSmartScaleView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } faceRect;
@property (retain, nonatomic) UXImageView *imageView;
@property (retain, nonatomic) UXView *suggestionView;
@property (retain, nonatomic) UXView *dimView;
@property (retain, nonatomic) CAShapeLayer *spotlightLayer;
@property (nonatomic) char needsSpotlightUpdate;
@property (nonatomic) char validSpotlight;
@property (retain, nonatomic) PXPersonImageRequest *imageRequest;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) UXLabel *dateLabel;
@property (readonly, nonatomic) id<PXPerson> suggestion;

- (id)init;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scaledFaceRect;
- (void)_updateDateFieldWithSuggestion:(id)a0;
- (double)_faceScale;
- (void)_updateSpotlightAnimated:(char)a0;
- (void)_updateSuggestionImageWithAnimatedSpotlight:(char)a0 withCompletion:(id /* block */)a1;
- (void)setSuggestion:(id)a0 animated:(char)a1 withCompletion:(id /* block */)a2;
- (void)viewScaleDidChange;

@end
