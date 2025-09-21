@interface ICNFMCByteSet : NSObject <NSCopying, NSMutableCopying> {
    unsigned char _bitString[32];
}

+ (id)asciiWhitespaceSet;
+ (id)ASCIIByteSet;
+ (id)nonASCIIByteSet;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)initWithCString:(const char *)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (char)byteIsMember:(unsigned char)a0;

@end
