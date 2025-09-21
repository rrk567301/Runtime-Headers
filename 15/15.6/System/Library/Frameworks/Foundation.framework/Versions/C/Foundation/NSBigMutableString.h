@class NSData;

@interface NSBigMutableString : NSMutableString {
    struct { unsigned char isStorage : 1; unsigned char isUnicode : 1; unsigned char hasBOM : 1; unsigned char swap : 1; unsigned char immutable : 1; unsigned int  : 27; } flags;
    unsigned long long length;
    union { struct { NSData *data; char *dataBytes; } d; struct { struct __CFStorage *storage; } s; } contents;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)length;
- (id)initWithString:(id)a0;
- (id)_createSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (char)_isCString;
- (id)_newSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 zone:(struct _NSZone { } *)a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)_checkForInvalidMutationWithSelector:(SEL)a0;
- (char)_copyDataFrom:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (char)_copyStorage:(struct __CFStorage **)a0 encoding:(unsigned long long *)a1;
- (char)_getData:(id *)a0 encoding:(unsigned long long *)a1;
- (char)_isMarkedAsImmutable;
- (void)_markAsImmutable;
- (id)_newBigSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 wantsMutable:(char)a1 zone:(struct _NSZone { } *)a2;
- (id)_newSmallImmutableSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 zone:(struct _NSZone { } *)a1;
- (char)_setData:(id)a0 encoding:(unsigned long long)a1;
- (char)_setStorage:(struct __CFStorage { } *)a0 encoding:(unsigned long long)a1;
- (id)initWithStorage:(struct __CFStorage { } *)a0 length:(unsigned long long)a1 isUnicode:(char)a2;

@end
