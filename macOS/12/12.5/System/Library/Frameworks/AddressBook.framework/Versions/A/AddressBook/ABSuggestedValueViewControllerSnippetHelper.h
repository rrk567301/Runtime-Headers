@class NSString, NSTextView;

@interface ABSuggestedValueViewControllerSnippetHelper : NSObject

@property (readonly, copy) NSString *snippet;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly) NSTextView *textView;

+ (id)selectionAttributes;
+ (void)enumerateLinesInSnippet:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 usingBlock:(id /* block */)a2;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfTrimmedString:(id)a0 atSubstringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfTrimmedString:(id)a0;

- (void).cxx_destruct;
- (void)enumerateLinesUsingBlock:(id /* block */)a0;
- (id)selectedRanges;
- (void)updateTextView;
- (void)applyHighlighting;
- (id)initWithSnippet:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 textView:(id)a2;
- (void)applyEmptySnippet;
- (void)applyNonEmptySnippet;
- (void)applyStringValue;
- (void)applySelection;
- (void)scrollSelectionToVisible;

@end
