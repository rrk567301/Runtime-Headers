@class NSImageView, CalUIListViewCellBackground, EKEvent, CalUILabel;

@interface CalUIListViewAllDayEventCell : CalUIListViewCell {
    CalUILabel *_titleField;
    CalUIListViewCellBackground *_backgroundView;
    NSImageView *_imageView;
    CalUILabel *_dateField;
    EKEvent *_event;
}

+ (double)heightForEvent:(id)a0;

- (void)_updateColors;
- (void)setDimmed:(BOOL)a0;
- (id)event;
- (void).cxx_destruct;
- (id)_titleFont;
- (void)updateLayer;
- (void)updateWithEvent:(id)a0;
- (id)_monospacedSubtextFont;
- (void)_updateTextAndIconColors;
- (long long)_userInterfaceStyle;
- (id)initForDragPreview:(BOOL)a0;

@end
