@interface NEIKEv2KEMProtocol : NSObject <NSCopying>

@property (readonly) unsigned long long method;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithMethod:(unsigned long long)a0;

@end
