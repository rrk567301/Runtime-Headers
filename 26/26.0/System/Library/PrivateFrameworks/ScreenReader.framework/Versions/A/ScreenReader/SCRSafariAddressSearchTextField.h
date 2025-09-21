@class NSString, AXFTextMarkerRange;

@interface SCRSafariAddressSearchTextField : SCRTextField

@property (readonly, nonatomic) BOOL _isNoLongerPartiallySelected;
@property (nonatomic) BOOL _selectionNotificationHandlerModifiedCachedNumberOfCharacters;
@property (nonatomic) unsigned long long _numberOfCharactersBeforeSelectionNotificationHandler;
@property (retain, nonatomic) AXFTextMarkerRange *_previousSelectionRangeBeforeSelectionNotificationHandler;
@property (nonatomic) BOOL _inputInProgressWhilePopupIsDisplayed;
@property (nonatomic) long long _lastSelectedIndex;
@property (retain, nonatomic) NSString *_lastSelectedElementText;

- (void).cxx_destruct;
- (id)_selectionHandler;
- (void)_elementWasDestroyed:(id)a0;
- (void)_handlePopupSelectionChange;
- (void)_outputFullTextValue;
- (void)_outputSelection;
- (void)_popupSelectionDidChange:(id)a0;
- (long long)_selectedIndex;
- (void)handleContentChangeWithUserInfo:(id)a0;
- (void)handleTextSelectionChange;
- (BOOL)keyboardHandler:(id)a0 request:(id)a1;
- (BOOL)shouldSuppressTextAttributesEcho;

@end
