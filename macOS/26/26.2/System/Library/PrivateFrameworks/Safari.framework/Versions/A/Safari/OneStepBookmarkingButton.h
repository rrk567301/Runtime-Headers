@class DelayedPopUpButtonCell;
@protocol OneStepBookmarkingButtonController;

@interface OneStepBookmarkingButton : RolloverImageButton

@property (retain) DelayedPopUpButtonCell *cell;
@property (retain, nonatomic) id<OneStepBookmarkingButtonController> controller;

+ (void)initialize;

- (id)accessibilityLabel;
- (void)mouseDown:(id)a0;
- (void).cxx_destruct;
- (id)accessibilityTitle;
- (void)setCell:(id)a0;
- (void)_handleMouseDown:(id)a0;

@end
