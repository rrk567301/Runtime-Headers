@interface NSInputAnalytics : NSObject

+ (id)IAFrameworkSoftlinkedProxy;
+ (void)didBeginSession;
+ (void)dictationEnded:(id)a0;
+ (void)didEndDictation;
+ (void)didInsertText:(id)a0 withSelectedText:(id)a1;
+ (void)_routeLastSingleCharacterKeyboardToInsertion;
+ (void)decrementSelectionCallExpectedCounter;
+ (void)decrementTextInsertionCallExpectedCounter;
+ (void)dictationPaused:(id)a0;
+ (void)dictationResumed:(id)a0;
+ (void)dictationStarted:(id)a0;
+ (void)didAutocorrectionForText:(id)a0 withText:(id)a1;
+ (void)didBeginDictation;
+ (void)didBeginSecureTextEntry;
+ (void)didChangeSelectionFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (void)didDeleteText:(id)a0;
+ (void)didDeleteTextFromStorage:(id)a0 usingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (void)didDeleteTextWithCount:(unsigned long long)a0;
+ (void)didEndSecureTextEntry;
+ (void)didEndSession;
+ (void)didInlineCompletionForText:(id)a0 withText:(id)a1;
+ (void)didInsertText:(id)a0;
+ (void)didInsertText:(id)a0 withSelectedTextFromStorage:(id)a1 usingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
+ (void)incrementSelectionCallExpectedCounter;
+ (void)incrementTextInsertionCallExpectedCounter;
+ (BOOL)isMouseDown;
+ (BOOL)isSelectionCallExpected;
+ (BOOL)isTextInsertionCallExpected;
+ (void)log_debug:(id)a0;
+ (void)log_error:(id)a0;
+ (void)setMouseDownWithPreviousRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })setMouseUpAndGetPreviousRangeAtMouseDown;
+ (void)setSource:(long long)a0;
+ (void)updateInputMode:(id)a0;

@end
