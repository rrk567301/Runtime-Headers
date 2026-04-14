@class NSTextField, CalDateRange, NSDate;
@protocol CalUIDateItemViewDelegate;

@interface CalUIDateItemView : NSScrubberItemView

@property (readonly, weak) id<CalUIDateItemViewDelegate> delegate;
@property (readonly) unsigned long long unit;
@property (readonly) NSDate *date;
@property (readonly) CalDateRange *dateRange;
@property (readonly) BOOL containsToday;
@property (readonly) NSTextField *dateText;

+ (id)titleForDelegate:(id)a0 date:(id)a1 unit:(unsigned long long)a2;
+ (id)dateRangeForDate:(id)a0 unit:(unsigned long long)a1 delegate:(id)a2;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 date:(id)a1 unit:(unsigned long long)a2;
- (id)_axTodayDescriptionForUnit:(unsigned long long)a0;

@end
