@class NSCalendar, CalUIReminderTimeWheelView, CalUIReminderTimeTrackView, NSDate, NSString;
@protocol CalUIReminderTimeWheelViewControllerDelegate;

@interface CalUIReminderTimeWheelViewController : NSViewController <NSScrollViewDelegate, CalUIReminderTimeWheelViewDelegate>

@property (weak) id<CalUIReminderTimeWheelViewControllerDelegate> delegate;
@property (retain) NSCalendar *calendar;
@property (retain) CalUIReminderTimeWheelView *timeWheelView;
@property (retain) CalUIReminderTimeTrackView *timeTrackView;
@property BOOL inInteractiveScroll;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastTrackViewVisibleRect;
@property (copy, nonatomic) NSDate *selectionDate;
@property (setter=_setWantsPageAlignedHorizontalAxis:) BOOL _wantsPageAlignedHorizontalAxis;
@property (setter=_setWantsPageAlignedVerticalAxis:) BOOL _wantsPageAlignedVerticalAxis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)didBeginScrollInScrollView:(id)a0;
- (void)didEndScrollInScrollView:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)loadView;
- (void)scrollViewBeganMomentum:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)touchesEndedWithEvent:(id)a0;
- (void)viewDidAppear;
- (void)_clipBoundsDidChange:(id)a0;
- (void)_clipFrameDidChange:(id)a0;
- (BOOL)_isShiftDown;
- (void)_localeDidChange:(id)a0;
- (void)_refreshLabelsWithVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_selectionDateChanged;
- (void)_updateSelectorLabel;
- (void)initViews;
- (void)timeWheelView:(id)a0 didSelectDate:(id)a1;

@end
