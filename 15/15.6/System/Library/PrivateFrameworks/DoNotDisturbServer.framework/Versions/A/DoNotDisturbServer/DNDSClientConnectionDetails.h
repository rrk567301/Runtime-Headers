@class NSUUID, NSSet;

@interface DNDSClientConnectionDetails : NSObject <NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSUUID *interruptionInvalidationAssertionUUID;
@property (readonly, copy, nonatomic) NSSet *assertionUpdateClientIdentifiers;
@property (readonly, copy, nonatomic) NSSet *activeAssertionUpdateClientIdentifiers;
@property (readonly, nonatomic) char wantsStateUpdates;
@property (readonly, nonatomic) char wantsSettingsUpdates;
@property (readonly, nonatomic) char wantsModeUpdates;
@property (readonly, nonatomic) char wantsActiveModeUpdates;
@property (readonly, nonatomic) char wantsGlobalConfigurationUpdates;
@property (readonly, nonatomic) char wantsMeDeviceStateUpdates;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithDetails:(id)a0;
- (id)_initWithInterruptionInvalidationAssertionUUID:(id)a0 assertionUpdateClientIdentifiers:(id)a1 activeAssertionUpdateClientIdentifiers:(id)a2 wantsStateUpdates:(char)a3 wantsSettingsUpdates:(char)a4 wantsModeUpdates:(char)a5 wantsActiveModeUpdates:(char)a6 wantsGlobalConfigurationUpdates:(char)a7 wantsMeDeviceStateUpdates:(char)a8;

@end
