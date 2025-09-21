@class NSDatePicker, IIDatePicker;

@interface TTRMDatePickerPanelContentView : NSView

@property (retain) IIDatePicker *_textDatePicker;
@property (retain) NSDatePicker *_calendarDatePicker;
@property (nonatomic) char shouldFlipContents;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCalendarDatePicker:(id)a0;
- (void)setTextDatePicker:(id)a0;
- (id)generateBezierPath;
- (id)generateFlipContentsBezierPath;
- (void)reArrangeContentViewWithShouldFlipContents:(char)a0;
- (void)sizeToFitForPanelContentView;

@end
