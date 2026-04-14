@interface SCRBrailleUtilities : NSObject

+ (void)sendBrailleElementLineWithFocusedElement:(id)a0 rebuildBrailleLine:(BOOL)a1 hasBrailleFocus:(BOOL)a2;
+ (void)addBrailleTextVariantsForElement:(id)a0 request:(id)a1;
+ (void)sendDFRBrailleLineForFocusedElement:(id)a0 lineElements:(id)a1;
+ (void)sendBrailleText:(id)a0 selectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 element:(id)a2;
+ (void)addBrailleVariantsForElement:(id)a0 request:(id)a1 hasBrailleFocus:(BOOL)a2 initialStepCount:(long long)a3;
+ (id)emptyTextForBraille;
+ (void)addBrailleTextVariantsForElement:(id)a0 attributedText:(id)a1 echoRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 selectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 request:(id)a4;
+ (void)sendBrailleTextLineWithFocusedElement:(id)a0 containingRange:(id)a1;
+ (void)sendBrailleDescriptionForObject:(id)a0 hasBrailleFocus:(BOOL)a1;
+ (id)_brailleItemDescriptionRequestWithElement:(id)a0 hasBrailleFocus:(BOOL)a1;
+ (id)_brailleRequestWithFocusedElement:(id)a0 focusThrough:(BOOL)a1 forceRebuild:(BOOL)a2;
+ (id)_brailleVariantsForElement:(id)a0 attributedText:(id)a1 brailleFocus:(BOOL)a2 echoRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 selectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
+ (void)_addBrailleElementVariantsForElement:(id)a0 brailleFocus:(BOOL)a1 request:(id)a2 initialStepCount:(long long)a3 applySubstitutions:(BOOL)a4;
+ (void)_applyBrailleSubstitutions:(id)a0;
+ (id)_substitutedBrailleStringForString:(id)a0;
+ (id)brailleDescriptionForObject:(id)a0 hasBrailleFocus:(BOOL)a1;

@end
