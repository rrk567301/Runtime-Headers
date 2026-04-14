@class NSArray, SCRCUserDefaults;
@protocol SCRBrailleLineNavigator;

@interface SCRBrailleFocusManager : NSObject

@property (retain, nonatomic) id<SCRBrailleLineNavigator> navigator;
@property (nonatomic) BOOL singleElementMode;
@property (retain, nonatomic, setter=_setUserDefaults:) SCRCUserDefaults *_userDefaults;
@property (retain, nonatomic) NSArray *lastBrailleLineElements;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithUserDefaults:(id)a0;
- (void)_registerPreferenceObservers;
- (void)_unregisterPreferenceObservers;
- (void)_preferencesChangedForKeyPath:(id)a0 value:(id)a1;
- (void)_appThreadMoveSelectionToLineRange:(id)a0 originalLine:(id)a1;
- (void)_updateNavigatorMode;
- (BOOL)moveToElement:(id)a0 info:(id)a1 request:(id)a2;
- (BOOL)panLineWithDirection:(unsigned long long)a0 request:(id)a1;
- (BOOL)_hasTextLineNavigator;
- (id)_textLineNavigator;
- (id)_lineNavigatorForElement:(id)a0;
- (void)_addBrailleLineToRequest:(id)a0 lineFocus:(int)a1;
- (BOOL)_panTextLineWithDirection:(unsigned long long)a0 request:(id)a1;
- (void)_addBrailleTextLineToRequest:(id)a0 lineFocus:(int)a1;
- (BOOL)routeToTextLineIndex:(unsigned long long)a0 withModifierMask:(unsigned long long)a1 request:(id)a2;
- (BOOL)sendEditableTextLine;
- (void)replaceTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1 insertCursor:(unsigned long long)a2 request:(id)a3;
- (void)_legacyReplaceTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1 insertCursor:(unsigned long long)a2 request:(id)a3;
- (void)_postKeyThreadMoveSelectionToLineRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 originalLine:(long long)a1 appThreadKey:(id)a2;
- (BOOL)_moveSelectionToLineRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_selectionLineRange;
- (id)_selectionRangeIncludingRouterLocation:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)clearStoredBrailleLine;
- (BOOL)hasBrailleLineNavigator;
- (BOOL)_isShiftKeyDown:(unsigned long long)a0;
- (BOOL)brailleLineMatchesUIElement:(id)a0;
- (id)brailleLineElementMatchingUIElement:(id)a0;
- (BOOL)brailleLineContainsUIElement:(id)a0;
- (id)parentForLineElement:(id)a0;

@end
