@interface AuRA_ConfigurationChangeRequest : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long sessionToken;
@property (readonly, nonatomic) unsigned int priority;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSessionToken:(unsigned long long)a0 priority:(unsigned int)a1;

@end
