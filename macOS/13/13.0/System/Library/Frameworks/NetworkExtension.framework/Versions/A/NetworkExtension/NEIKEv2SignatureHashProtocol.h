@interface NEIKEv2SignatureHashProtocol : NSObject <NSCopying> {
    unsigned long long _hashType;
}

@property (readonly, nonatomic) unsigned long long hashType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (id)initWithHashType:(unsigned long long)a0;

@end
