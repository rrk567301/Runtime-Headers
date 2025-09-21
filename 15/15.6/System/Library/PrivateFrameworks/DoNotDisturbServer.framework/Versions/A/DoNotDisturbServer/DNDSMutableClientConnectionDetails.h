@class NSUUID, NSSet;

@interface DNDSMutableClientConnectionDetails : DNDSClientConnectionDetails

@property (copy, nonatomic) NSUUID *interruptionInvalidationAssertionUUID;
@property (copy, nonatomic) NSSet *assertionUpdateClientIdentifiers;
@property (copy, nonatomic) NSSet *activeAssertionUpdateClientIdentifiers;
@property (nonatomic) char wantsStateUpdates;
@property (nonatomic) char wantsSettingsUpdates;
@property (nonatomic) char wantsModeUpdates;
@property (nonatomic) char wantsActiveModeUpdates;
@property (nonatomic) char wantsGlobalConfigurationUpdates;
@property (nonatomic) char wantsMeDeviceStateUpdates;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setActiveAssertionUpdateClientIdentifiers:(id)a0;
- (void)setAssertionUpdateClientIdentifiers:(id)a0;
- (void)setInterruptionInvalidationAssertionUUID:(id)a0;
- (void)setWantsActiveModeUpdates:(char)a0;
- (void)setWantsGlobalConfigurationUpdates:(char)a0;
- (void)setWantsMeDeviceStateUpdates:(char)a0;
- (void)setWantsModeUpdates:(char)a0;
- (void)setWantsSettingsUpdates:(char)a0;
- (void)setWantsStateUpdates:(char)a0;

@end
