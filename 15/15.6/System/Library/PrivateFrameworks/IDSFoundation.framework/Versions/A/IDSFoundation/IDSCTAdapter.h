@class NSMutableDictionary, NSHashTable;

@interface IDSCTAdapter : NSObject {
    NSHashTable *_listeners;
    id _coreTelephonyClient;
    id _cache;
    NSMutableDictionary *_registrationStateByLabelID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) char dualSIMCapabilityEnabled;
@property (readonly, nonatomic) char isAnySIMUsable;
@property (readonly, nonatomic) char isAnySIMInserted;
@property (readonly, nonatomic) char supportsIdentification;
@property (readonly, nonatomic) char supportsSMS;
@property (readonly, nonatomic) char doesAnySIMSupportsSimultaneousVoiceAndDataRightNow;
@property (readonly, nonatomic) char hasMultipleSIMs;

+ (id)sharedInstance;
+ (char)isPhoneNumber:(id)a0 equivalentToExistingPhoneNumber:(id)a1;

- (void).cxx_destruct;
- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (char)isPhoneNumberEmergencyNumber:(id)a0;
- (id)SIMForIdentifier:(id)a0;
- (id)currentSIMsWithError:(id *)a0;
- (id)CTPNRForSIM:(id)a0;
- (id)carrierBundleValueFromAllSIMsForKey:(id)a0 ofType:(Class)a1 withFallback:(id)a2;
- (id)carrierBundleValueFromSIM:(id)a0 forKey:(id)a1 ofType:(Class)a2 withFallback:(id)a3;
- (id)contextForSim:(id)a0;
- (id)initWithCoreTelephonyClient:(id)a0 systemMonitor:(id)a1;
- (char)isPNRNumber:(id)a0 andPhoneBookNumber:(id)a1 differentEnoughFromSIMIdentifier:(id)a2 toReregisterWithNewNumber:(id *)a3;

@end
