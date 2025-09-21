@class NSDictionary;

@interface NEIKEv2EAPProtocol : NSObject <NSCopying>

@property (readonly) unsigned long long method;
@property (retain) NSDictionary *properties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMethod:(unsigned long long)a0;

@end
