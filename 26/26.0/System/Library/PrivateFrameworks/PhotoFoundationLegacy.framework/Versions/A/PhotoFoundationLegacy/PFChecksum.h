@interface PFChecksum : NSObject <NSCopying> {
    struct PFChecksumBytes { unsigned char data[16]; } _bytes;
}

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBytes:(struct PFChecksumBytes { unsigned char x0[16]; })a0;
- (id)string;
- (id)description;
- (id)initWithString:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToBytes:(struct PFChecksumBytes { unsigned char x0[16]; })a0;
- (struct PFChecksumBytes { unsigned char x0[16]; })checksumBytes;
- (id)initWithChecksumAsData:(id)a0;

@end
