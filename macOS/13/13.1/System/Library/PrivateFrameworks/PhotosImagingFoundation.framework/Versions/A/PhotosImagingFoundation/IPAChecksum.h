@interface IPAChecksum : NSObject <NSCopying> {
    struct IPAChecksumBytes { unsigned char data[16]; } _bytes;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)string;
- (id)initWithData:(id)a0;
- (id)initWithString:(id)a0;
- (id)initWithBytes:(struct IPAChecksumBytes { unsigned char x0[16]; })a0;
- (id)initWithChecksumAsData:(id)a0;
- (struct IPAChecksumBytes { unsigned char x0[16]; })checksumBytes;
- (BOOL)isEqualToBytes:(struct IPAChecksumBytes { unsigned char x0[16]; })a0;

@end
