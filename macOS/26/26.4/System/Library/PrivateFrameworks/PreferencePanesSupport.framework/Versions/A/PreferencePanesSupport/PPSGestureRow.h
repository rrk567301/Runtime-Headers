@interface PPSGestureRow : PPGestureRow {
    long long _prepareChoicePopupOnce;
}

- (void)refreshUI;
- (void)setup;
- (id)title;
- (void)_prepareChoicePopup;

@end
