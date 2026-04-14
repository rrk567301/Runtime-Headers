@interface _NSInlineData : NSData {
    unsigned short _length;
}

+ (id)_allocWithExtraBytes:(unsigned long long)a0;

- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (BOOL)_isCompact;
- (const void *)bytes;
- (id)_bridgingCopy:(const void **)a0 length:(unsigned long long *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)length;
- (id)_createDispatchData;
- (id)initWithCoder:(id)a0;

@end
