@class NSArray, SCRElement, SCRCUserDefaults;
@protocol SCRBrailleLineNavigator;

@interface SCRBrailleManager : NSObject

@property (retain, nonatomic) id<SCRBrailleLineNavigator> navigator;
@property (nonatomic) char singleElementMode;
@property (nonatomic) char alwaysUseNemethForEquations;
@property (retain, nonatomic, setter=_setUserDefaults:) SCRCUserDefaults *_userDefaults;
@property (retain, nonatomic) NSArray *lastBrailleLineElements;
@property (readonly, nonatomic) char hasActive2DBrailleDevice;
@property (retain) SCRElement *focused2DBrailleElement;
@property double braille2DZoom;
@property struct CGPoint { double x; double y; } braille2DOrigin;
@property double braille2DIntensity;
@property char braille2DInvert;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithUserDefaults:(id)a0;
- (void)_addBraille2DObject:(id)a0 forIndex:(unsigned long long)a1 toRequest:(id)a2;
- (void)_addBrailleLineToRequest:(id)a0 lineFocus:(int)a1;
- (void)_addBrailleTextLineToRequest:(id)a0 lineFocus:(int)a1;
- (void)_appThreadMoveSelectionToLineRange:(id)a0 originalLine:(id)a1;
- (char)_hasTextLineNavigator;
- (char)_isShiftKeyDown:(unsigned long long)a0;
- (void)_legacyReplaceTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1 insertCursor:(unsigned long long)a2 request:(id)a3;
- (id)_lineNavigatorForElement:(id)a0;
- (char)_moveSelectionToLineRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (char)_panTextLineWithDirection:(long long)a0 request:(id)a1;
- (void)_postKeyThreadMoveSelectionToLineRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 originalLine:(long long)a1 appThreadKey:(id)a2;
- (void)_preferencesChangedForKeyPath:(id)a0 value:(id)a1;
- (struct CGImage { } *)_preflightImageFor2DBrailleAnalysis:(id)a0;
- (void)_registerPreferenceObservers;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_selectionLineRange;
- (id)_selectionRangeIncludingRouterLocation:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_textLineNavigator;
- (void)_unregisterPreferenceObservers;
- (void)_updateNavigatorMode;
- (char)adjust2DBrailleEdgeIntensity:(char)a0 request:(id)a1;
- (char)adjust2DBrailleOrigin:(long long)a0 request:(id)a1;
- (char)adjust2DBrailleZoom:(char)a0 request:(id)a1;
- (char)brailleLineContainsUIElement:(id)a0;
- (id)brailleLineElementMatchingUIElement:(id)a0;
- (char)brailleLineMatchesUIElement:(id)a0;
- (void)clearStoredBrailleLine;
- (char)hasBrailleLineNavigator;
- (char)move2DBrailleToElement:(id)a0 info:(id)a1 request:(id)a2;
- (char)moveToElement:(id)a0 info:(id)a1 request:(id)a2;
- (char)panLineWithDirection:(long long)a0 request:(id)a1;
- (id)parentForLineElement:(id)a0;
- (void)prepareForLaunch;
- (void)prepareForShutdown;
- (void)replaceTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1 insertCursor:(unsigned long long)a2 request:(id)a3;
- (char)routeToTextLineIndex:(unsigned long long)a0 withModifierMask:(unsigned long long)a1 request:(id)a2;
- (char)sendEditableTextLine;
- (char)toggle2DBrailleInvertWithRequest:(id)a0;

@end
