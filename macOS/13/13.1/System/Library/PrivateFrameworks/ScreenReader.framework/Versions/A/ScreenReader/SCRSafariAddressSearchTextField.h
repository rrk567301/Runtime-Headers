@class SCRTextMarkerRange;

@interface SCRSafariAddressSearchTextField : SCRTextField

@property (readonly, nonatomic) BOOL _isNoLongerPartiallySelected;
@property (nonatomic) BOOL _selectionNotificationHandlerModifiedCachedNumberOfCharacters;
@property (nonatomic) unsigned long long _numberOfCharactersBeforeSelectionNotificationHandler;
@property (retain, nonatomic) SCRTextMarkerRange *_previousSelectionRangeBeforeSelectionNotificationHandler;
@property (nonatomic) BOOL _inputInProgressWhilePopupIsDisplayed;

- (void).cxx_destruct;
- (id)_selectionHandler;
- (void)_elementWasDestroyed:(id)a0;
- (void)_popupSelectionDidChange:(id)a0;
- (BOOL)shouldSuppressTextAttributesEcho;
- (void)_outputSelection;
- (void)handleTextSelectionChange;
- (void)handleContentChangeWithUserInfo:(id)a0;
- (BOOL)keyboardHandler:(id)a0 request:(id)a1;
- (void)_handlePopupSelectionChange;
- (void)_outputFullTextValue;

@end
