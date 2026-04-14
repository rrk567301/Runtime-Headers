@interface AuRA_ClientProcessDescription : NSObject <NSCopying>

@property (nonatomic) struct { unsigned int val[8]; } auditToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
