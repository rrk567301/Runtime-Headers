@class NSDictionary;

@interface NEIKEv2EAPProtocol : NSObject <NSCopying> {
    unsigned long long _method;
}

@property (readonly) unsigned long long method;
@property (retain) NSDictionary *properties;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithMethod:(unsigned long long)a0;

@end
