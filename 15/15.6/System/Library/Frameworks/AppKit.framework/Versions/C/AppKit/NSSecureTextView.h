@class NSString;

@interface NSSecureTextView : NSTextView <NSLayoutManagerDelegate> {
    long long _outerTag;
    long long _innerTag;
    struct { unsigned char _secureInput : 1; unsigned char _capsLockDown : 1; unsigned char _numLockDown : 1; unsigned char _invalidated : 1; unsigned int _reserved : 28; } _sdvFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (char)_allowKillRing;
+ (void)_doMenu:(id)a0;
+ (id)secureTextViewForWindow:(id)a0;

- (void)dealloc;
- (void)setDelegate:(id)a0;
- (id)itemsForSharingServiceInRanges:(id)a0;
- (void)resignKeyWindow;
- (void)becomeKeyWindow;
- (void)showGuessPanel:(id)a0;
- (id)_accessibilityIndicatorImageChildrenWithParent:(id)a0;
- (id)_accessibilityIndicatorImageUnderPoint:(struct CGPoint { double x0; double x1; })a0 forParent:(id)a1;
- (void)_accessibilityPostValueChangeNotificationAfterDelay;
- (char)_allowsMultipleTextSelectionByMouse;
- (char)_continuousCheckingAllowed;
- (id)_definitionAnimationControllerForAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(id)a2 baselineOriginProvider:(id /* block */)a3;
- (void)_detachFieldEditorFromWindow:(id)a0;
- (void)_drawInsertionPointInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(id)a1;
- (id)_immediateActionAnimationControllerForCharacterAtIndex:(unsigned long long)a0 withRecognizer:(id)a1;
- (void)_resetTooltips;
- (id)_revealAnimationControllerForCharacterAtIndex:(unsigned long long)a0;
- (char)_shouldShowIndicators;
- (char)_shouldUseBoundsOutsets;
- (void)_updateIndicators;
- (id)accessibilityAXAttributedStringForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 parent:(id)a1;
- (void)accessibilityPostNotification:(id)a0;
- (id)accessibilityRTFForRangeAttributeForParameter:(id)a0;
- (id)accessibilityValueAttribute;
- (char)becomeFirstResponder;
- (id)candidateListTouchBarItem;
- (void)checkSpelling:(id)a0;
- (void)complete:(id)a0;
- (void)copy:(id)a0;
- (void)didChangeText;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)enableSecureInput:(char)a0;
- (unsigned long long)enabledTextCheckingTypes;
- (void)flagsChanged:(id)a0;
- (void)getCapsLockRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 numLockRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)inputContext;
- (char)isAutomaticTextCompletionEnabled;
- (void)layoutManagerDidInvalidateLayout:(id)a0;
- (id)menuForEvent:(id)a0;
- (void)orderFrontSubstitutionsPanel:(id)a0;
- (void)quickLookWithEvent:(id)a0;
- (char)resignFirstResponder;
- (void)setImportsGraphics:(char)a0;
- (void)setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setRichText:(char)a0;
- (void)setSelectable:(char)a0;
- (void)startSpeaking:(id)a0;
- (id)textCheckingController;
- (void)updateCandidates;
- (void)updateTrackingAreas;
- (char)validateUserInterfaceItem:(id)a0;
- (id)view:(id)a0 stringForToolTip:(long long)a1 point:(struct CGPoint { double x0; double x1; })a2 userData:(void *)a3;
- (id)writablePasteboardTypes;
- (char)writeSelectionToPasteboard:(id)a0 type:(id)a1;

@end
