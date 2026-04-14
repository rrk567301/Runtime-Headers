@interface NEIKEv2EncryptionProtocol : NSObject <NSCopying> {
    unsigned short _keyLength;
    unsigned long long _wireType;
}

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithEncryptionType:(unsigned long long)a0;

@end
