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
- (void)_updateColors;
- (id)_titleFont;
- (id)event;
- (void)setDimmed:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateWithEvent:(id)a0;
- (void)_circleButtonPressed;
- (id)_monospacedSubtextFont;
- (void)_updateTextAndIconColors;
- (long long)_userInterfaceStyle;
- (id)initForDragPreview:(BOOL)a0;

@end
