@interface NEIKEv2IntegrityProtocol : NSObject <NSCopying>

@property (readonly) unsigned long long type;

- (id)initWithType:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
