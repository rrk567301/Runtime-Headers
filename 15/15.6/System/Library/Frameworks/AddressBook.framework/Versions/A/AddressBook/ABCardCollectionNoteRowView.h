@class NSString, NSArray;

@interface ABCardCollectionNoteRowView : ABCardCollectionRowView <ABNoteTextViewDelegate, NSTextViewDelegate> {
    NSArray *_noteConstraints;
}

@property (nonatomic) unsigned long long noteInsertionPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)rangeComparator;

- (void)dealloc;
- (void).cxx_destruct;
- (char)hasValue;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)mouseDown:(id)a0;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setSelectedRanges:(id)a0;
- (void)textDidChange:(id)a0;
- (void)textDidEndEditing:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)generateConstraints;
- (void)highlightSearchTerms:(id)a0;
- (void)applyValueTextColor:(id)a0;
- (char)isValidRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)maxInsertionPoint;
- (id)noteTextView;
- (id)rangesMatchingSearchTerms:(id)a0;
- (void)setValueEditable:(char)a0;
- (void)setValueSelectable:(char)a0;
- (void)setValueView:(id)a0;
- (void)textViewDidBecomeFirstResponder:(id)a0;
- (void)textViewDidResignFirstResponder:(id)a0;
- (double)textViewHeight;
- (double)textViewWidth;
- (id)unionedRangeValues:(id)a0;
- (void)updateValueFontWithFont:(id)a0;
- (id)valueTextView;

@end
