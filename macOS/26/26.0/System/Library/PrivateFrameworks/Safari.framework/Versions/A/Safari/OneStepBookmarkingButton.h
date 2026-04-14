@class DelayedPopUpButtonCell;
@protocol OneStepBookmarkingButtonController;

@interface OneStepBookmarkingButton : RolloverImageButton

@property (retain) DelayedPopUpButtonCell *cell;
@property (retain, nonatomic) id<OneStepBookmarkingButtonController> controller;

+ (void)initialize;

- (void)mouseDown:(id)a0;
- (id)accessibilityLabel;
- (id)accessibilityTitle;
- (void).cxx_destruct;
- (void)setCell:(id)a0;
- (void)_handleMouseDown:(id)a0;

@end
