@interface NEIKEv2IntegrityProtocol : NSObject <NSCopying>

@property (readonly) unsigned long long type;

- (unsigned long long)hash;
- (id)initWithType:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
