@class NSData;

@interface NSSubrangeData : NSData {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSData *_data;
}

- (BOOL)_isCompact;
- (id)initWithData:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (const void *)bytes;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (unsigned long long)length;
- (void)dealloc;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)getBytes:(void *)a0;
- (id)init;

@end
