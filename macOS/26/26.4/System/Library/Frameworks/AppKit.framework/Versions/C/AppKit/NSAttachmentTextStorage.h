@class NSTextStorage;

@interface NSAttachmentTextStorage : NSTextStorage {
    NSTextStorage *_realTS;
}

- (void)setFilename:(id)a0;
- (id)filename;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)setUrl:(id)a0;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)init;
- (id)string;
- (void)dealloc;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)url;

@end
