@class NSCountableTextRange, NSString, NSTextStorage, NSRunStorage, NSAttributedString, NSStorage;
@protocol NSTextContentStorageDelegate;

@interface NSTextContentStorage : NSTextContentManager <NSTextStorageObserving> {
    NSAttributedString *_attributedString;
    NSTextStorage *_textStorage;
    NSCountableTextRange *_documentRange;
    NSRunStorage *_indexTable;
    NSStorage *_elements;
    struct _NSRange { unsigned long long location; unsigned long long length; } _cachedRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _modifiedRange;
    long long _modifiedDocumentLengthDelta;
    struct _NSRange { unsigned long long location; unsigned long long length; } _editedRange;
    long long _editedDelta;
    unsigned long long _editedMask;
    BOOL _notifyingToFixSelection;
    struct { id *x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; id x2[64]; long long x3; struct _NSRange { unsigned long long x0; unsigned long long x1; } x4; unsigned long long x5; long long x6; BOOL x7; BOOL x8; } *_activeEnumerationCache;
}

@property (readonly) NSCountableTextRange *documentRange;
@property BOOL copiesContentsInTextParagraphs;
@property (weak) id<NSTextContentStorageDelegate> delegate;
@property (copy) NSAttributedString *attributedString;
@property (retain) NSTextStorage *textStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_usesTextListElements;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)delegate;
- (void)setAttributedString:(id)a0;
- (void)setDelegate:(id)a0;
- (id)locationFromLocation:(id)a0 withOffset:(long long)a1;
- (long long)offsetFromLocation:(id)a0 toLocation:(id)a1;
- (id)attributedString;
- (void)processEditingForTextStorage:(id)a0 edited:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 changeInLength:(long long)a3 invalidatedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (id)textStorage;
- (void)setTextStorage:(id)a0;
- (id)adjustedRangeFromRange:(id)a0 forEditingTextSelection:(BOOL)a1;
- (void)replaceContentsInRange:(id)a0 withTextElements:(id)a1;
- (BOOL)isCountableDataSource;
- (id)enumerateTextElementsFromLocation:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)synchronizeToBackingStore:(id /* block */)a0;
- (void)synchronizeTextLayoutManagers:(id /* block */)a0;
- (BOOL)containsExtraLineFragment;
- (void)performEditingTransactionForTextStorage:(id)a0 usingBlock:(id /* block */)a1;
- (void)_commonInitialization;
- (id)attributedStringForTextElement:(id)a0;
- (id)textElementForAttributedString:(id)a0;
- (id)attributedStringForTextElements:(id)a0;
- (id)textElementsForAttributedString:(id)a0;
- (BOOL)_supportsTextAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)updateRangesForTextElement:(id)a0 locationDelta:(long long)a1;
- (void)beginEditingTransaction;
- (void)endEditingTransaction;
- (void)performEditingTransactionForTextStorage:(id)a0 withBlock:(id /* block */)a1;
- (id)locationFromLocation:(id)a0 offset:(long long)a1;

@end
