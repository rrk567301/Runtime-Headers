@interface SCRBrailleUtilities : NSObject

+ (void)setBrailleAttributesForElement:(id)a0;
+ (id)textFieldPlaceholderForElement:(id)a0;
+ (void)_addBrailleElementVariantsForElement:(id)a0 brailleFocus:(char)a1 request:(id)a2 initialStepCount:(long long)a3 applySubstitutions:(char)a4;
+ (void)_applyBrailleSubstitutions:(id)a0;
+ (id)_brailleItemDescriptionRequestWithElement:(id)a0 hasBrailleFocus:(char)a1;
+ (id)_brailleRequestWithFocusedElement:(id)a0 focusThrough:(char)a1 forceRebuild:(char)a2;
+ (id)_brailleVariantsForElement:(id)a0 attributedText:(id)a1 isPlaceholder:(char)a2 brailleFocus:(char)a3 echoRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 selectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 selectionOnDifferentLine:(char)a6;
+ (id)_eligibileRequestCategories;
+ (id)_ineligibileRequestCategories;
+ (unsigned char)_isRequestActionEligibleForBrailleAlert:(id)a0;
+ (id)_substitutedBrailleStringForString:(id)a0;
+ (void)addBrailleAlertVariantsToRequest:(id)a0 withVariants:(id)a1;
+ (void)addBrailleItemDescriptionForElement:(id)a0 hasBrailleFocus:(char)a1 request:(id)a2;
+ (void)addBrailleTextVariantsForElement:(id)a0 attributedText:(id)a1 isPlaceholder:(char)a2 echoRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 selectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 selectionOnDifferentLine:(char)a5 request:(id)a6;
+ (void)addBrailleTextVariantsForElement:(id)a0 request:(id)a1;
+ (void)addBrailleVariantsForElement:(id)a0 request:(id)a1 hasBrailleFocus:(char)a2 initialStepCount:(long long)a3;
+ (id)brailleDescriptionForObject:(id)a0 hasBrailleFocus:(char)a1;
+ (void)combineBrailleStyleSequentialStep:(id)a0 withVariants:(id)a1;
+ (char)convertOutputSequentialStepToBraille:(id)a0;
+ (void)disableTRMIfNeeded;
+ (id)emptyTextForBraille;
+ (char)hasBrailleDisplayHistory:(char)a0;
+ (char)isRequestEligibleForBrailleAlert:(id)a0;
+ (void)resetBrailleAtributesForElement:(id)a0;
+ (void)sendBrailleDescriptionForObject:(id)a0 hasBrailleFocus:(char)a1;
+ (void)sendBrailleElementLineWithFocusedElement:(id)a0 rebuildBrailleLine:(char)a1 hasBrailleFocus:(char)a2;
+ (void)sendBrailleElementLineWithFocusedElement:(id)a0 rebuildBrailleLine:(char)a1 hasBrailleFocus:(char)a2 withEvent:(id)a3;
+ (void)sendBrailleText:(id)a0 selectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 element:(id)a2;
+ (void)sendBrailleTextLineWithFocusedElement:(id)a0 containingRange:(id)a1;
+ (void)sendDFRBrailleLineForFocusedElement:(id)a0 lineElements:(id)a1;
+ (id)textAttachmentDescriptionForElement:(id)a0 brailleLine:(id)a1;
+ (struct { char x0; id x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; struct _NSRange { unsigned long long x0; unsigned long long x1; } x3; })textAttachmentLineForElement:(id)a0 brailleLine:(id)a1 currentLineSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 currentLineCursor:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;

@end
