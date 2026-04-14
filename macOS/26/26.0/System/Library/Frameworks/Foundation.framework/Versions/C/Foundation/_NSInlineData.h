@interface _NSInlineData : NSData {
    unsigned short _length;
}

+ (id)_allocWithExtraBytes:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const void *)bytes;
- (BOOL)_providesConcreteBacking;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (BOOL)_isCompact;
- (id)_createDispatchData;
- (id)initWithCoder:(id)a0;
- (unsigned long long)length;

@end
