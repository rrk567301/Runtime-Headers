@class UXView, CAShapeLayer, NSDateFormatter, UXImageView, PXPersonImageRequest, UXLabel;
@protocol PXPerson;

@interface PXPeopleSuggestionView : PXSmartScaleView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } faceRect;
@property (retain, nonatomic) UXImageView *imageView;
@property (retain, nonatomic) UXView *suggestionView;
@property (retain, nonatomic) UXView *dimView;
@property (retain, nonatomic) CAShapeLayer *spotlightLayer;
@property (nonatomic) BOOL needsSpotlightUpdate;
@property (nonatomic) BOOL validSpotlight;
@property (retain, nonatomic) PXPersonImageRequest *imageRequest;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) UXLabel *dateLabel;
@property (readonly, nonatomic) id<PXPerson> suggestion;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)commonInit;
- (void)layoutSubviews;
- (void)viewScaleDidChange;
- (void)setSuggestion:(id)a0 animated:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)_updateSuggestionImageWithAnimatedSpotlight:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_updateSpotlightAnimated:(BOOL)a0;
- (void)_updateDateFieldWithSuggestion:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scaledFaceRect;
- (double)_faceScale;

@end
