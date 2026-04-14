@interface LNEmbeddedApplicationConnectionOptions : LNConnectionOptions

@property (nonatomic) BOOL suspended;
@property (nonatomic) BOOL sceneless;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
