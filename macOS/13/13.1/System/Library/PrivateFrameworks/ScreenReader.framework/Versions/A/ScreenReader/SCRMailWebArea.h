@class NSString;

@interface SCRMailWebArea : SCRWebArea <SCRMailMessageContent>

@property (nonatomic) unsigned long long lastQuoteLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)typeDescription;
- (id)valueDescription;
- (id)roleDescription;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (BOOL)chainEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (id)attributedValueDescription;
- (BOOL)prefersTopLevelTextLineOutput;
- (void)beginFocusFromElement:(id)a0 withEvent:(id)a1;
- (void)moveInsertionToElement:(id)a0 affinity:(long long)a1;
- (void)addContentToRequest:(id)a0;
- (id)newOutputRequestForTextMarkerRange:(id)a0 withUIElement:(id)a1 command:(struct { long long x0; struct { long long x0; long long x1; } x1; })a2 lastSelectedTextMarkerRange:(id)a3 selectedTextMarkerRange:(id)a4 variants:(id)a5;
- (void)handleTextNavigationWithUIElement:(id)a0 command:(struct { long long x0; struct { long long x0; long long x1; } x1; })a1 lastSelectedTextMarkerRange:(id)a2 selectedTextMarkerRange:(id)a3 outputRequest:(id)a4;
- (unsigned long long)shouldMoveFocusFromElement:(id)a0 toElement:(id)a1;
- (BOOL)_isMagicPressEvent:(id)a0;
- (BOOL)_isOpenContextualMenuEvent:(id)a0;
- (void)_prependOutputRequest:(id)a0 withQuoteLevel:(unsigned long long)a1;
- (unsigned long long)_quoteLevelForTextMarker:(id)a0 withUIElement:(id)a1;
- (void)_setInitialSelectedTextMarkerRangeIfNeeded;
- (BOOL)_handleMagicPressEventWithRequest:(id)a0;
- (BOOL)_handleOpenContextualMenuWithRequest:(id)a0;
- (BOOL)_handleDoNotOpenContextualMenuWithRequest:(id)a0;
- (BOOL)_handleOpenContextualMenuAtSelectedTextRange:(id)a0;
- (void)_updateQuoteLevelForTextMarkerRange:(id)a0 uiElement:(id)a1 command:(struct { long long x0; struct { long long x0; long long x1; } x1; })a2 outputRequest:(id)a3;
- (BOOL)speakWordOnEdgeMovementEvents;

@end
