@class MKMapItem;

@interface MKFullDeveloperPlaceCardRemoteUIHostViewController : MKPlaceCardRemoteUIHostViewController {
    char _isStandAlonePlaceCard;
    MKMapItem *_mapItem;
    char _dismissButtonDisplayed;
    char _hideInlineMap;
}

- (void).cxx_destruct;
- (void)_configureConnection:(id)a0;
- (id)initAsAccessoryWithMapItem:(id)a0 dismissButtonDisplayed:(char)a1;
- (id)initAsStandAloneWithMapItem:(id)a0 dismissButtonDisplayed:(char)a1 hideInlineMap:(char)a2;

@end
