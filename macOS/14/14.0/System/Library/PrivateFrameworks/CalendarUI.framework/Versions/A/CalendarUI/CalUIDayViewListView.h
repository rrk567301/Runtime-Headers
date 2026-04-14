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

+ (id)viewWithEvent:(id)a0;
+ (id)viewWithMultidayEvent:(id)a0 occurrenceStartDate:(id)a1;
+ (BOOL)willDrawBackgroundForEvent:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_titleFont;
- (id)initWithEvent:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateLayer;
- (void)updateWithEvent:(id)a0;
- (id)_timeFont;
- (id)_angleStripedBackgroundColor;
- (id)_angleStripedBackgroundImage;
- (id)_locationFont;
- (id)initWithMultidayEvent:(id)a0 occurrenceStartDate:(id)a1;
- (void)updateWithEvent:(id)a0 isMultiday:(BOOL)a1 occurrenceStartDate:(id)a2;

@end
