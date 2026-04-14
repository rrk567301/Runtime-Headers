@class NSTextField, NSCalendar, CalUIReminderTimeWheelSelectorView, CalUIReminderTimeWheelSelectorLabelMask, NSScrollView, CalUIReminderTimeTrackView, NSString;
@protocol CalUIReminderTimeWheelViewDelegate;

@interface CalUIReminderTimeWheelView : NSView <NSAccessibilitySlider>

@property (retain) CalUIReminderTimeWheelSelectorView *selectorView;
@property (retain) CalUIReminderTimeWheelSelectorLabelMask *selectorLabelMask;
@property (retain) NSCalendar *calendar;
@property (retain) NSTextField *selectorLabel;
@property (retain) NSScrollView *timeTrackScrollView;
@property (retain) CalUIReminderTimeTrackView *timeTrackView;
@property (weak) id<CalUIReminderTimeWheelViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityLabel;
- (id)accessibilityChildren;
- (BOOL)accessibilityPerformDecrement;
- (BOOL)accessibilityPerformIncrement;
- (id)accessibilityValue;
- (id)_makeSelectorView;
- (id)_makeSelectorLabel;
- (id)_makeSelectorLabelMask;
- (id)_makeTimeTrackScrollView;

@end
