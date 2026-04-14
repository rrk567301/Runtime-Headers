@class NSDatePicker, IIDatePicker;

@interface IIDatePickerPanelContentView : NSView

@property (retain) IIDatePicker *_textDatePicker;
@property (retain) NSDatePicker *_calendarDatePicker;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setCalendarDatePicker:(id)a0;
- (void)setTextDatePicker:(id)a0;
- (void)sizeToFitAndArrange;

@end
