@class NSCalendar, NSMutableDictionary, NSDateInterval, NSDate;

@interface CalUIReminderTimeTrackView : NSView {
    NSDate *_selectionDate;
    NSDateInterval *_representedInterval;
}

@property (retain) NSCalendar *calendar;
@property (retain) NSMutableDictionary *markLabels;
@property (copy) NSDate *selectionDate;
@property (copy) NSDateInterval *representedInterval;
@property BOOL enclosingScrollViewInInteractiveScroll;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLabels;
- (void)scrollDateToCenter:(id)a0;
- (BOOL)updateSelectionDateWithVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shouldRoundToQuarterHours:(BOOL)a1;
- (void)updateLabelsWithVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 exclusionZone:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)centerRepresentedIntervalToDate:(id)a0;
- (void)centerAtPoint:(struct CGPoint { double x0; double x1; })a0 shouldRoundToQuarterHours:(BOOL)a1;
- (id)_flooredHourForDate:(id)a0;
- (void)setSelectionDate:(id)a0 shouldRoundToQuarterHours:(BOOL)a1 animate:(BOOL)a2;
- (void)scrollDateToCenter:(id)a0 animate:(BOOL)a1;
- (double)_documentWidthForDateInterval:(id)a0;
- (double)_offsetAtDate:(id)a0;
- (id)_dateAtOffset:(double)a0 shouldRoundToQuarterHours:(BOOL)a1;
- (void)setSelectionDate:(id)a0 shouldRoundToQuarterHours:(BOOL)a1;
- (id)_dateStringForDate:(id)a0;

@end
