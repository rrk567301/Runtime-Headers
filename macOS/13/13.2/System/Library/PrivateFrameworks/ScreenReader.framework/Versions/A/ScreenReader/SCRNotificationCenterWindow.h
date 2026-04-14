@interface SCRNotificationCenterWindow : SCRWindow <SCRApplicationDirectChildProtocol>

- (void)setKeyboardChild:(id)a0 force:(BOOL)a1;
- (BOOL)showInGuide;
- (void)addItemNameDescriptionToRequest:(id)a0;
- (id)titleDescription;
- (void)addItemDescriptionForBrailleToRequest:(id)a0;
- (BOOL)allowAlternateSpeechToTitle;
- (BOOL)shouldAnnounceArrival;
- (id)_orderedElementsToDescribe;
- (BOOL)_isNotificationBannerOrAlert;
- (id)notificationElements;

@end
