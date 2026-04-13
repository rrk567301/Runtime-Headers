@class DNDConfiguration, NSArray, DNDMode, NSDate;

@interface DNDMutableModeConfiguration : DNDModeConfiguration

@property (copy) DNDMode *mode;
@property (copy) DNDConfiguration *configuration;
@property (copy) NSArray *triggers;
@property unsigned long long impactsAvailability;
@property unsigned long long dimsLockScreen;
@property (copy) NSDate *created;
@property (copy) NSDate *lastModified;
@property (getter=isAutomaticallyGenerated) BOOL automaticallyGenerated;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setMode:(id)a0;
- (void)setAutomaticallyGenerated:(BOOL)a0;
- (void)setConfiguration:(id)a0;
- (void)setLastModified:(id)a0;
- (void)setCreated:(id)a0;
- (void)setTriggers:(id)a0;
- (void)setDimsLockScreen:(unsigned long long)a0;
- (void)setImpactsAvailability:(unsigned long long)a0;

@end
