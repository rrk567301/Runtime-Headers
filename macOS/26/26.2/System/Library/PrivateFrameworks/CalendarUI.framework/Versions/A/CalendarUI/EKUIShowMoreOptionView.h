@class EKUIResizingTextField, NSString;
@protocol EKUIShowMoreOptionViewDelegate;

@interface EKUIShowMoreOptionView : CalUIControlView <NSAccessibilityButton>

@property (retain) EKUIResizingTextField *showMoreTextField;
@property (retain) NSString *axTitle;
@property (weak) id<EKUIShowMoreOptionViewDelegate> delegate;
@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityLabel;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)mouseUp:(id)a0;
- (void)keyDown:(id)a0;
- (BOOL)accessibilityPerformPress;
- (id)initWithViewController:(id)a0 delegate:(id)a1 axTitle:(id)a2;

@end
