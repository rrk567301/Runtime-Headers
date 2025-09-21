@interface CalendarWidget.SpatialLayoutDelegate : NSObject <CUIKSingleDayTimelineGeometryDelegate, CUIKSingleDayTimelineLayoutScreenUtils> {
    void /* unknown type, empty encoding */ startDate;
    void /* unknown type, empty encoding */ endDate;
    void /* unknown type, empty encoding */ startHourToShow;
    void /* unknown type, empty encoding */ endHourToShow;
    void /* unknown type, empty encoding */ scale;
    void /* unknown type, empty encoding */ calendar;
    void /* unknown type, empty encoding */ hoursInDay;
    void /* unknown type, empty encoding */ secondsInDay;
    void /* unknown type, empty encoding */ secondsInMinute;
    void /* unknown type, empty encoding */ secondsInHour;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } displayedRect;
@property (nonatomic, readonly) double hourHeight;
@property (nonatomic) double topPadding;
@property (nonatomic, readonly) double timeWidth;
@property (nonatomic) BOOL originIsUpperLeft;

- (double)dateForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })pointForDate:(double)a0;
- (id)init;
- (double)RoundToScreenScale:(double)a0;
- (void).cxx_destruct;

@end
