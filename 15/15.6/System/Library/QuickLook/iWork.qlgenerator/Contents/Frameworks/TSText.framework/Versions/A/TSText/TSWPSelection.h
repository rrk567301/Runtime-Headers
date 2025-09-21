@class TSWPRangeArray, NSString;

@interface TSWPSelection : TSKSelection <TSDTextSelection>

@property (class, readonly, nonatomic) unsigned long long activityExcerptLength;

@property (nonatomic) unsigned long long p_leadingCharIndex;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } visualDefinitionRange;
@property (readonly, nonatomic) TSWPRangeArray *ranges;
@property (readonly, nonatomic) TSWPRangeArray *visualRanges;
@property (readonly, nonatomic) unsigned long long rangeCount;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } superRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } firstRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } insertionPointRange;
@property (readonly, nonatomic) unsigned long long insertionCharIndex;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } DEPRECATED_range;
@property (readonly, nonatomic) unsigned long long headCharIndex;
@property (readonly, nonatomic) unsigned long long tailCharIndex;
@property (readonly, nonatomic) char caretIsLeadingEdge;
@property (readonly, nonatomic) unsigned long long leadingCharIndex;
@property (readonly, nonatomic) long long caretLFAffinity;
@property (readonly, nonatomic) char isAtEndOfLine;
@property (readonly, nonatomic) char validVisualRanges;
@property (readonly, nonatomic) char isVisual;
@property (readonly, nonatomic) long long styleInsertionBehavior;
@property (nonatomic) double preferredOffset;
@property (readonly, nonatomic) char isRange;
@property (readonly, nonatomic) char isInsertionPoint;
@property (readonly, nonatomic) char isDiscontiguous;
@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) char allowsKeyCommandCaching;
@property (retain, nonatomic) TSWPRangeArray *i_logicalRanges;
@property (nonatomic) char i_validVisualRanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)selectionWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (Class)archivedSelectionClass;
+ (id)selectionWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 type:(long long)a1 leadingEdge:(char)a2 storage:(id)a3;
+ (id)selectionFromWPSelection:(id)a0;
+ (char)p_checkEndOfLineFlagForRange:(inout struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 leadingEdge:(inout char *)a1 type:(inout long long *)a2 endOfLine:(char)a3 storage:(id)a4;
+ (id)selectionWithRanges:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (unsigned long long)start;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)shortDescription;
- (unsigned long long)end;
- (char)intersectsRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithArchive:(const void *)a0;
- (void)enumerateRanges:(id /* block */)a0;
- (char)containsCharacterAtIndex:(unsigned long long)a0;
- (id)copyWithNewRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)copyWithNewType:(long long)a0;
- (id)copyWithNewType:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyWithNewVisualTypeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 head:(unsigned long long)a1 tail:(unsigned long long)a2;
- (void)enumerateRangesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (id)initWithType:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 styleInsertionBehavior:(long long)a2 caretAffinity:(long long)a3;
- (char)isEquivalentForInsertionStyle:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)copyWithNewStyleInsertionBehavior:(long long)a0 newCaretAffinity:(long long)a1;
- (id)copyWithVisualRanges:(id)a0 headCharIndex:(unsigned long long)a1 tailCharIndex:(unsigned long long)a2 rightToLeft:(char)a3 sameLine:(char)a4;
- (void)i_setHeadCharIndex:(unsigned long long)a0 tailCharIndex:(unsigned long long)a1;
- (id)initWithType:(long long)a0 ranges:(id)a1 validVisualRanges:(char)a2 styleInsertionBehavior:(long long)a3 caretAffinity:(long long)a4 caretIsLeadingEdge:(char)a5 leadingCharIndex:(unsigned long long)a6 headCharIndex:(unsigned long long)a7 tailCharIndex:(unsigned long long)a8;
- (id)initWithType:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 styleInsertionBehavior:(long long)a2 caretAffinity:(long long)a3 caretIsLeadingEdge:(char)a4 leadingCharIndex:(unsigned long long)a5;
- (char)p_isEqual:(id)a0;
- (id)copyWithNewVisualTypeHead:(unsigned long long)a0 tail:(unsigned long long)a1;
- (id)constrainToRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (char)containsCharacterAtIndex:(unsigned long long)a0 withOptions:(unsigned long long)a1;
- (id)copyWithNewLogicalRanges:(id)a0;
- (id)copyWithNewRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 newCaretAffinity:(long long)a1;
- (id)initWithRangeArray:(id)a0;
- (id)initWithType:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 styleInsertionBehavior:(long long)a2 caretAffinity:(long long)a3 caretIsLeadingEdge:(char)a4 storage:(id)a5;
- (id)initWithType:(long long)a0 ranges:(id)a1;
- (id)p_copyWithClass:(Class)a0;
- (char)p_isRange;
- (void)reverseEnumerateRanges:(id /* block */)a0;

@end
