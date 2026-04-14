@interface _NSInlineData : NSData {
    unsigned short _length;
}

+ (id)_allocWithExtraBytes:(unsigned long long)a0;

- (BOOL)_isCompact;
- (BOOL)_providesConcreteBacking;
- (const void *)bytes;
- (unsigned long long)length;
- (id)_createDispatchData;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
