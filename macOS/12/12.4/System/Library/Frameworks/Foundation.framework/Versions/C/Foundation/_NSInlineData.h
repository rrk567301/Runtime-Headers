@interface _NSInlineData : NSData {
    unsigned short _length;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (unsigned long long)length;
- (const void *)bytes;
- (BOOL)_isCompact;
- (id)_createDispatchData;
- (BOOL)_providesConcreteBacking;
- (id)initWithCoder:(id)a0;

@end
