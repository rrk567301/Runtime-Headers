@interface DNDSSyncSettings : NSObject <NSMutableCopying, NSCopying>

@property (readonly, nonatomic, getter=isPairSyncEnabled) BOOL pairSyncEnabled;
@property (readonly, nonatomic, getter=isCloudSyncEnabled) BOOL cloudSyncEnabled;

- (id)description;
- (id)initWithPairSyncEnabled:(BOOL)a0 cloudSyncEnabled:(BOOL)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
