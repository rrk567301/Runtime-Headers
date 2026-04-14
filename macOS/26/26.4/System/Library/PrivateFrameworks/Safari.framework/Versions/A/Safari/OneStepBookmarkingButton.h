@class DelayedPopUpButtonCell;
@protocol OneStepBookmarkingButtonController;

@interface OneStepBookmarkingButton : RolloverImageButton

@property (retain) DelayedPopUpButtonCell *cell;
@property (retain, nonatomic) id<OneStepBookmarkingButtonController> controller;

+ (void)initialize;

- (id)accessibilityTitle;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)setCell:(id)a0;
- (void)_handleMouseDown:(id)a0;

@end
