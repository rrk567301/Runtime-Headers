@interface DNDSSyncSettings : NSObject <NSMutableCopying, NSCopying>

@property (readonly, nonatomic, getter=isPairSyncEnabled) char pairSyncEnabled;
@property (readonly, nonatomic, getter=isCloudSyncEnabled) char cloudSyncEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPairSyncEnabled:(char)a0 cloudSyncEnabled:(char)a1;

@end
