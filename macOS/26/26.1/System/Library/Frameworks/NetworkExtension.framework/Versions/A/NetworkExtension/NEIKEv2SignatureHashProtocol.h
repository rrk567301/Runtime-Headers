@interface NEIKEv2SignatureHashProtocol : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long hashType;

- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithHashType:(unsigned long long)a0;

@end
