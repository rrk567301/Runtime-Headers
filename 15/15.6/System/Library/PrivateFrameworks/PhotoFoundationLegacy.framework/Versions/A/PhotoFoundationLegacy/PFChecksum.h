@interface PFChecksum : NSObject <NSCopying> {
    struct PFChecksumBytes { unsigned char data[16]; } _bytes;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)string;
- (id)initWithString:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithBytes:(struct PFChecksumBytes { unsigned char x0[16]; })a0;
- (char)isEqualToBytes:(struct PFChecksumBytes { unsigned char x0[16]; })a0;
- (struct PFChecksumBytes { unsigned char x0[16]; })checksumBytes;
- (id)initWithChecksumAsData:(id)a0;

@end
