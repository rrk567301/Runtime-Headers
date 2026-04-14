@interface NEIKEv2EncryptionProtocol : NSObject <NSCopying> {
    unsigned short _keyLength;
    unsigned long long _wireType;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithEncryptionType:(unsigned long long)a0;

@end
