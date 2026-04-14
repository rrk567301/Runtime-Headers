@class NSMutableAttributedString, NSDate;

@interface OSATextStorage : NSTextStorage {
    NSMutableAttributedString *_contents;
    NSDate *_date;
    BOOL _usesTabs;
    BOOL _wrapsLines;
    BOOL _indentsWrappedLines;
    unsigned long long _tabWidth;
    unsigned long long _indentWidth;
}

+ (void)initialize;
+ (void)sourceStylesChanged;
+ (id)defaultPlainTextFont;

- (void)dealloc;
- (id)init;
- (unsigned long long)length;
- (id)string;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)attributesAtIndex:(unsigned long long)a0 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedString:(id)a1;
- (void)insertAttributedString:(id)a0 atIndex:(unsigned long long)a1;
- (void)appendAttributedString:(id)a0;
- (void)setAttributedString:(id)a0;
- (void)addAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)addAttribute:(id)a0 value:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)removeAttribute:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)date;
- (id)initWithString:(id)a0;
- (id)initWithString:(id)a0 attributes:(id)a1;
- (id)contents;
- (id)initWithAttributedString:(id)a0;
- (void)edited:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 changeInLength:(long long)a2;
- (void)replaceValueAtIndex:(unsigned long long)a0 inPropertyWithKey:(id)a1 withValue:(id)a2;
- (void)insertValue:(id)a0 atIndex:(unsigned long long)a1 inPropertyWithKey:(id)a2;
- (void)removeValueAtIndex:(unsigned long long)a0 fromPropertyWithKey:(id)a1;
- (void)fixAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setDate:(id)a0;
- (id)undoManager;
- (void)setContents:(id)a0;
- (BOOL)usesTabs;
- (id)initWithOwnedMutableAttributedString:(id)a0;
- (void)setUsesTabs:(BOOL)a0;
- (BOOL)wrapsLines;
- (void)setWrapsLines:(BOOL)a0;
- (BOOL)indentsWrappedLines;
- (void)setIndentsWrappedLines:(BOOL)a0;
- (unsigned long long)tabWidth;
- (void)setTabWidth:(unsigned long long)a0;
- (unsigned long long)indentWidth;
- (void)setIndentWidth:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })findString:(id)a0 previousFindRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 limitRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 options:(unsigned long long)a3 matchStyle:(int)a4 wrap:(BOOL)a5;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1 withUndoManager:(id)a2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedString:(id)a1 withUndoManager:(id)a2;
- (void)fixWrappedLineIndentsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_firstLayoutManager;
- (void)fixTabStopsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_fixAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forceExtended:(BOOL)a1;

@end
