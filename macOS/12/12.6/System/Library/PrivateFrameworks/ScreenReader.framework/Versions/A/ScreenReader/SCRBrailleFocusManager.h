@class SCRLineNavigator, NSArray, SCRCUserDefaults;

@interface SCRBrailleFocusManager : NSObject

@property (retain, nonatomic) SCRLineNavigator *textNavigator;
@property (nonatomic) BOOL singleElementMode;
@property (retain, nonatomic, setter=_setUserDefaults:) SCRCUserDefaults *_userDefaults;
@property (retain, nonatomic) NSArray *lastBrailleLineElements;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithUserDefaults:(id)a0;
- (id)brailleLineElementMatchingUIElement:(id)a0;
- (BOOL)brailleTextLineMatchesUIElement:(id)a0;
- (BOOL)routeToTextLineIndex:(unsigned long long)a0 withModifierMask:(unsigned long long)a1 request:(id)a2;
- (BOOL)brailleLineContainsUIElement:(id)a0;
- (BOOL)panTextLine:(BOOL)a0 request:(id)a1;
- (void)clearStoredBrailleLine;
- (BOOL)hasBrailleTextLineNavigator;
- (void)_registerPreferenceObservers;
- (void)_unregisterPreferenceObservers;
- (void)_preferencesChangedForKeyPath:(id)a0 value:(id)a1;
- (void)replaceTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1 insertCursor:(unsigned long long)a2 request:(id)a3;
- (BOOL)sendEditableTextLine;
- (void)_addBrailleTextLineToRequest:(id)a0 lineFocus:(int)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_selectionLineRange;
- (id)_textLineAttachmentDescription;
- (id)_brailleTextFieldPlaceholder;
- (id)_insertAttachmentDescriptionsInBrailleText:(id)a0 textElement:(id)a1 selectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 voiceOverCursorRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3;
- (BOOL)_isShiftKeyDown:(unsigned long long)a0;
- (id)_selectionRangeIncludingRouterLocation:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_moveSelectionToLineRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_legacyReplaceTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1 insertCursor:(unsigned long long)a2 request:(id)a3;
- (void)_postKeyThreadMoveSelectionToLineRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 originalLine:(long long)a1 appThreadKey:(id)a2;
- (void)_appThreadMoveSelectionToLineRange:(id)a0 originalLine:(id)a1;
- (BOOL)moveToText:(id)a0 range:(id)a1 request:(id)a2;

@end
