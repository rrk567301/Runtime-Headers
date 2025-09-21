@class DNDConfiguration, NSString, NSArray, DNDMode, NSDate;

@interface DNDMutableModeConfiguration : DNDModeConfiguration

@property (nonatomic) struct { long long x0; long long x1; long long x2; } lastModifiedByVersion;
@property (copy, nonatomic) NSString *lastModifiedByDeviceID;
@property (copy) DNDMode *mode;
@property (copy) DNDConfiguration *configuration;
@property (copy) NSArray *triggers;
@property unsigned long long impactsAvailability;
@property unsigned long long dimsLockScreen;
@property (copy) NSDate *created;
@property (copy) NSDate *lastModified;
@property long long compatibilityVersion;
@property (getter=isAutomaticallyGenerated) char automaticallyGenerated;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setMode:(id)a0;
- (void)setConfiguration:(id)a0;
- (void)setCreated:(id)a0;
- (void)setAutomaticallyGenerated:(char)a0;
- (void)setCompatibilityVersion:(long long)a0;
- (void)setLastModified:(id)a0;
- (void)setTriggers:(id)a0;
- (void)_configurationWasModified;
- (void)setDimsLockScreen:(unsigned long long)a0;
- (void)setImpactsAvailability:(unsigned long long)a0;
- (void)setLastModifiedByDeviceID:(id)a0;
- (void)setLastModifiedByVersion:(struct { long long x0; long long x1; long long x2; })a0;

@end
