@interface SCRNotificationCenterWindow : SCRWindow <SCRApplicationDirectChildProtocol>

- (char)_isNotificationBannerOrAlert;
- (id)_orderedElementsToDescribe;
- (void)addItemDescriptionForBrailleToRequest:(id)a0;
- (void)addItemNameDescriptionToRequest:(id)a0;
- (char)allowAlternateSpeechToTitle;
- (id)notificationElements;
- (void)setKeyboardChild:(id)a0 force:(char)a1;
- (char)shouldAnnounceArrival;
- (char)showInGuide;
- (id)titleDescription;

@end
