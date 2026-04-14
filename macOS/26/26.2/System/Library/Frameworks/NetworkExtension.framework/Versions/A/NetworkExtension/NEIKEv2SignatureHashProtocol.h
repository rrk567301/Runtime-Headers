@interface NEIKEv2SignatureHashProtocol : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long hashType;

- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithHashType:(unsigned long long)a0;

@end
