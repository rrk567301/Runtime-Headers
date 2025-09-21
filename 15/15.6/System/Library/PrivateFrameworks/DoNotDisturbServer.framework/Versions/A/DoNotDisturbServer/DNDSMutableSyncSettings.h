@interface DNDSMutableSyncSettings : DNDSSyncSettings

@property (nonatomic, getter=isPairSyncEnabled) char pairSyncEnabled;
@property (nonatomic, getter=isCloudSyncEnabled) char cloudSyncEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCloudSyncEnabled:(char)a0;
- (void)setPairSyncEnabled:(char)a0;

@end
