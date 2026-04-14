@class NSDictionary;

@interface NEIKEv2EAPProtocol : NSObject <NSCopying>

@property (readonly) unsigned long long method;
@property (retain) NSDictionary *properties;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithMethod:(unsigned long long)a0;

@end
