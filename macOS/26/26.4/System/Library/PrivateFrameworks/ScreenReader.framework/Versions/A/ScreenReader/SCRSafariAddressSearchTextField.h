@class AXFTextMarkerRange;

@interface SCRSafariAddressSearchTextField : SCRTextField

@property (readonly, nonatomic) BOOL _isNoLongerPartiallySelected;
@property (nonatomic) BOOL _selectionNotificationHandlerModifiedCachedNumberOfCharacters;
@property (nonatomic) unsigned long long _numberOfCharactersBeforeSelectionNotificationHandler;
@property (retain, nonatomic) AXFTextMarkerRange *_previousSelectionRangeBeforeSelectionNotificationHandler;

- (void).cxx_destruct;
- (id)_selectionHandler;
- (void)_outputFullTextValue;
- (void)handleContentChangeWithUserInfo:(id)a0;
- (void)handleTextSelectionChange;
- (BOOL)shouldSuppressTextAttributesEcho;

@end
