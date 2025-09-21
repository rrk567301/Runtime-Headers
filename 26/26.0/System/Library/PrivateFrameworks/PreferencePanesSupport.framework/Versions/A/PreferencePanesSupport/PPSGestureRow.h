@interface PPSGestureRow : PPGestureRow {
    long long _prepareChoicePopupOnce;
}

- (void)setup;
- (id)title;
- (void)refreshUI;
- (void)_prepareChoicePopup;

@end
