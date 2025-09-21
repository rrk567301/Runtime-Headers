@class DNDBypassSettings, NSDate;

@interface DNDSMutableGlobalConfiguration : DNDSGlobalConfiguration

@property (nonatomic) unsigned long long preventAutoReply;
@property (copy, nonatomic) DNDBypassSettings *bypassSettings;
@property (copy, nonatomic) NSDate *lastModified;
@property (nonatomic, getter=isAutomaticallyGenerated) char automaticallyGenerated;
@property (nonatomic) unsigned long long modesCanImpactAvailability;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAutomaticallyGenerated:(char)a0;
- (void)setLastModified:(id)a0;
- (void)setBypassSettings:(id)a0;
- (void)setModesCanImpactAvailability:(unsigned long long)a0;
- (void)setPreventAutoReply:(unsigned long long)a0;

@end
