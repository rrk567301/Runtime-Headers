@interface NSVBAuditToken : NSObject <NSCopying>

@property (readonly) struct { unsigned int val[8]; } auditToken;

+ (BOOL)token:(struct { unsigned int x0[8]; })a0 isEqualToToken:(struct { unsigned int x0[8]; })a1;
+ (id)auditTokenWithAuditToken:(struct { unsigned int x0[8]; })a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)tokenAsData;

@end
