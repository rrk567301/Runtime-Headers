@class NSString, ICMacTextView, NSArray, ICAttachment;

@interface NotesEditor.ICPDFTextFindingResult : ICTextFindingResult {
    void /* unknown type, empty encoding */ result;
}

+ (void)resultsInAttachment:(ICAttachment *)a0 matchingString:(NSString *)a1 textView:(ICMacTextView *)a2 ignoreCase:(char)a3 wholeWords:(char)a4 startsWith:(char)a5 usePattern:(char)a6 completion:(void (^)(NSArray *))a7;

- (id)init;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)containingViewInTextView:(id)a0;
- (id)framesForHighlightInTextView:(id)a0;
- (void)scrollToVisibleInTextView:(id)a0;
- (void)selectInTextView:(id)a0;

@end
