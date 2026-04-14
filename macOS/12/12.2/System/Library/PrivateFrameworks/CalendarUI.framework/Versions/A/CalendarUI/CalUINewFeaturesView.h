@class CalUINewFeaturesContinueButton;

@interface CalUINewFeaturesView : NSVisualEffectView

@property (retain) CalUINewFeaturesContinueButton *continueButton;
@property (copy, nonatomic) id /* block */ removalBlock;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_textLabelWithString:(id)a0 font:(id)a1;
- (id)_viewForIconWithName:(id)a0;

@end
