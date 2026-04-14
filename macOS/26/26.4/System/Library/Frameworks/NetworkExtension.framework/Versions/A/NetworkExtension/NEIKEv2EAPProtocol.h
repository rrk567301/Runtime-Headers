@class NSDictionary;

@interface NEIKEv2EAPProtocol : NSObject <NSCopying>

@property (readonly) unsigned long long method;
@property (retain) NSDictionary *properties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithMethod:(unsigned long long)a0;

@end
