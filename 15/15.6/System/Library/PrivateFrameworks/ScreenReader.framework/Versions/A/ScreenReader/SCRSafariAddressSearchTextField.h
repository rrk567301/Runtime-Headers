@class AXFTextMarkerRange;

@interface SCRSafariAddressSearchTextField : SCRTextField

@property (readonly, nonatomic) char _isNoLongerPartiallySelected;
@property (nonatomic) char _selectionNotificationHandlerModifiedCachedNumberOfCharacters;
@property (nonatomic) unsigned long long _numberOfCharactersBeforeSelectionNotificationHandler;
@property (retain, nonatomic) AXFTextMarkerRange *_previousSelectionRangeBeforeSelectionNotificationHandler;
@property (nonatomic) char _inputInProgressWhilePopupIsDisplayed;

- (void).cxx_destruct;
- (id)_selectionHandler;
- (void)_elementWasDestroyed:(id)a0;
- (void)_handlePopupSelectionChange;
- (void)_outputFullTextValue;
- (void)_outputSelection;
- (void)_popupSelectionDidChange:(id)a0;
- (void)handleContentChangeWithUserInfo:(id)a0;
- (void)handleTextSelectionChange;
- (char)keyboardHandler:(id)a0 request:(id)a1;
- (char)shouldSuppressTextAttributesEcho;

@end
