@class NSTextStorage;

@interface NSSubTextStorage : NSTextStorage {
    NSTextStorage *_parent;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    BOOL _releasing;
    BOOL _editing;
}

- (id)textStorage;
- (BOOL)_tryRetain;
- (id)initWithString:(id)a0;
- (id)initWithAttributedString:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isDeallocating;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)processEditingForTextStorage:(id)a0 edited:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 changeInLength:(long long)a3 invalidatedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithString:(id)a0 attributes:(id)a1;
- (id)string;
- (oneway void)release;
- (Class)classForCoder;
- (void)dealloc;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)setTextStorage:(id)a0;
- (id)_subtextStorageFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)allowsOriginalFontMetricsOverride;
- (id)initWithTextStorage:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)textStorage:(id)a0 edited:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 changeInLength:(long long)a3 invalidatedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;

@end
