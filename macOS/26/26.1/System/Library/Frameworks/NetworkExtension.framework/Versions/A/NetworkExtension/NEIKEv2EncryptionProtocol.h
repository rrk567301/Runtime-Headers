@interface NEIKEv2EncryptionProtocol : NSObject <NSCopying> {
    unsigned short _keyLength;
    unsigned long long _wireType;
}

- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithEncryptionType:(unsigned long long)a0;

@end
