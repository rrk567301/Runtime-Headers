@class NSImageView, CalUIListViewCellBackground, EKEvent, CalUILabel;

@interface CalUIListViewAllDayEventCell : CalUIListViewCell {
    CalUILabel *_titleField;
    CalUIListViewCellBackground *_backgroundView;
    NSImageView *_imageView;
    CalUILabel *_dateField;
    EKEvent *_event;
}

+ (double)heightForEvent:(id)a0;

- (void)updateLayer;
- (void)_updateColors;
- (id)_titleFont;
- (id)event;
- (void)setDimmed:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateWithEvent:(id)a0;
- (id)_monospacedSubtextFont;
- (void)_updateTextAndIconColors;
- (long long)_userInterfaceStyle;
- (id)initForDragPreview:(BOOL)a0;

@end
