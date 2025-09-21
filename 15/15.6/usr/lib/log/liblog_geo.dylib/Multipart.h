@interface Multipart : NSObject <NSCopying> {
    unsigned long long identifier;
    unsigned char partIndex;
    unsigned char partCount;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)copyWithIndex:(unsigned char)a0;
- (char)isEqualToMultipart:(id)a0;

@end
