@interface AuRA_ClientProcessDescription : NSObject <NSCopying>

@property (nonatomic) struct { unsigned int val[8]; } auditToken;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
