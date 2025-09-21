@interface MKFullDeveloperPlaceCardSelectionAccessoryView : MKViewSwitchingSelectionAccessoryView {
    char _isStandAlonePlaceCard;
    char _hideInlineMap;
}

- (id)initAsAccessory;
- (id)_createErrorView;
- (id)_createLoadingView;
- (id)_createMapItemViewController:(id)a0;
- (id)initAsStandAloneHidingInlineMap:(char)a0;

@end
