@interface NEIKEv2PRFProtocol : NSObject <NSCopying>

@property (readonly) unsigned long long type;
@property (readonly) unsigned int nonceSize;

- (id)initWithType:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;

@end
