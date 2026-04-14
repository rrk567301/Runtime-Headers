@interface NEIKEv2EncryptionProtocol : NSObject <NSCopying> {
    unsigned short _keyLength;
    unsigned long long _wireType;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithEncryptionType:(unsigned long long)a0;

@end
