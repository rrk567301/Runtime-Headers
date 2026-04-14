@class NSImageView, NSClickGestureRecognizer, EKEvent, CalUILabel, CalUIViewWithCornerRadius;
@protocol CalUIListViewReminderCellDelegate;

@interface CalUIListViewReminderCell : CalUIListViewCell {
    CalUILabel *_titleField;
    CalUIViewWithCornerRadius *_backgroundView;
    CalUILabel *_timeField;
    NSImageView *_circleIcon;
    NSClickGestureRecognizer *_circleClickRecognizer;
    EKEvent *_event;
}

@property (weak) id<CalUIListViewReminderCellDelegate> delegate;

+ (double)heightForEvent:(id)a0;

- (void)updateLayer;
- (void).cxx_destruct;
- (id)event;
- (id)_titleFont;
- (void)setDimmed:(BOOL)a0;
- (void)_updateColors;
- (void)updateWithEvent:(id)a0;
- (void)_circleButtonPressed;
- (id)_monospacedSubtextFont;
- (void)_updateTextAndIconColors;
- (long long)_userInterfaceStyle;
- (id)initForDragPreview:(BOOL)a0;

@end
