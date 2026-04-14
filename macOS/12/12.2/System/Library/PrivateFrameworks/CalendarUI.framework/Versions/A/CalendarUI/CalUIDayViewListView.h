@class EKEvent, CalUILayerBackedView, CalUILabel;

@interface CalUIDayViewListView : NSView

@property (retain) EKEvent *event;
@property (retain) CalUILayerBackedView *timeView;
@property (retain) CalUILabel *startTimeField;
@property (retain) CalUILabel *endTimeField;
@property (retain) CalUILayerBackedView *calendarColorView;
@property (retain) CalUILayerBackedView *eventView;
@property (retain) CalUILabel *titleField;
@property (retain) CalUILabel *locationField;
@property (retain) CalUILayerBackedView *backgroundView;
@property (retain) CalUILayerBackedView *divider;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL dimmed;
@property (nonatomic) BOOL drawDivider;

+ (BOOL)willDrawBackgroundForEvent:(id)a0;
+ (id)viewWithEvent:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)updateWithEvent:(id)a0;
- (void)updateLayer;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithEvent:(id)a0;
- (id)_titleFont;
- (id)_timeFont;
- (id)_locationFont;
- (id)_angleStripedBackgroundColor;
- (id)_angleStripedBackgroundImage;
- (id)initWithEvent:(id)a0 showCalendarColor:(BOOL)a1 showTimes:(BOOL)a2 showLocation:(BOOL)a3;

@end
