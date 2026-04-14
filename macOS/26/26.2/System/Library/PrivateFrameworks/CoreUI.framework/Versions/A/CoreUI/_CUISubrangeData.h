@class NSData;

@interface _CUISubrangeData : NSData {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSData *_data;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const void *)bytes;
- (unsigned long long)length;
- (id)initWithData:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)dealloc;

@end
