@class NSTextStorage;

@interface NSAttachmentTextStorage : NSTextStorage {
    NSTextStorage *_realTS;
}

- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)filename;
- (void)setFilename:(id)a0;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setUrl:(id)a0;
- (void)dealloc;
- (id)url;
- (id)string;
- (id)init;

@end
