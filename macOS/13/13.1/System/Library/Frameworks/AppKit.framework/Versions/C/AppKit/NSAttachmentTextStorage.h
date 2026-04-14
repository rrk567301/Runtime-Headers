@class NSTextStorage;

@interface NSAttachmentTextStorage : NSTextStorage {
    NSTextStorage *_realTS;
}

- (void)dealloc;
- (id)init;
- (id)string;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)url;
- (void)setUrl:(id)a0;
- (void)setFilename:(id)a0;
- (id)filename;

@end
