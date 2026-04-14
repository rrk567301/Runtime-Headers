@interface LNEmbeddedApplicationConnectionOptions : LNConnectionOptions

@property (nonatomic) BOOL suspended;
@property (nonatomic) BOOL sceneless;
@property (nonatomic) long long openApplicationPriority;
@property (nonatomic) BOOL allowsForegroundAppLaunchWhileInCarPlay;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
