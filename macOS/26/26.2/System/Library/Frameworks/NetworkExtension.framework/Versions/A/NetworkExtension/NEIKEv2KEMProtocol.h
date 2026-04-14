@interface NEIKEv2KEMProtocol : NSObject <NSCopying>

@property (readonly) unsigned long long method;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithMethod:(unsigned long long)a0;

@end
