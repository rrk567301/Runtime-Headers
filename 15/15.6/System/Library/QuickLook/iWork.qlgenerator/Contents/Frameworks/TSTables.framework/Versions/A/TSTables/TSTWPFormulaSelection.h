@interface TSTWPFormulaSelection : TSWPSelection

@property (nonatomic) unsigned long long activeTokenCharIndex;

+ (Class)archivedSelectionClass;

- (char)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (id)initWithType:(long long)a0 ranges:(id)a1 validVisualRanges:(char)a2 styleInsertionBehavior:(long long)a3 caretAffinity:(long long)a4 caretIsLeadingEdge:(char)a5 leadingCharIndex:(unsigned long long)a6 headCharIndex:(unsigned long long)a7 tailCharIndex:(unsigned long long)a8;
- (char)allowsKeyCommandCaching;
- (id)initWithType:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 styleInsertionBehavior:(long long)a2 caretAffinity:(long long)a3 caretIsLeadingEdge:(char)a4 leadingCharIndex:(unsigned long long)a5;
- (id)initWithType:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 styleInsertionBehavior:(long long)a2 caretAffinity:(long long)a3 caretIsLeadingEdge:(char)a4 leadingCharIndex:(unsigned long long)a5 activeTokenCharIndex:(unsigned long long)a6;
- (id)initWithType:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 validVisualRanges:(char)a2 styleInsertionBehavior:(long long)a3 caretAffinity:(long long)a4 caretIsLeadingEdge:(char)a5 leadingCharIndex:(unsigned long long)a6 headCharIndex:(unsigned long long)a7 tailCharIndex:(unsigned long long)a8 activeTokenCharIndex:(unsigned long long)a9;

@end
