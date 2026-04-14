@class NSData;

@interface CoreUtilsNSSubrangeData : NSData {
    NSData *_data;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

- (BOOL)_isCompact;
- (const void *)bytes;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)getBytes:(void *)a0;
- (unsigned long long)length;
- (void).cxx_destruct;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (id)init;
- (id)initWithData:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)dealloc;

@end
