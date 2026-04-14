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

- (void)mouseUp:(id)a0;
- (id)accessibilityLabel;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)keyDown:(id)a0;
- (BOOL)accessibilityPerformPress;
- (id)initWithViewController:(id)a0 delegate:(id)a1 axTitle:(id)a2;

@end
