@class SUOSUPowerSource, NSNumber;

@interface SUOSUPowerPolicy : NSObject

@property (retain) SUOSUPowerSource *powerSource;
@property unsigned long long architecture;
@property (retain) NSNumber *chargerPolicyOverride;
@property (retain) NSNumber *batteryPercentageRequiredOverride;
@property (retain) NSNumber *percentBatteryRemainingOverride;
@property (retain) NSNumber *connectedToACOverride;
@property char foreground;
@property char applyOnly;
@property unsigned long long updateType;
@property (readonly) unsigned long long batteryPercentageRequired;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_batteryRequirementWithChargerPolicy:(unsigned long long *)a0;
- (id)_descriptionForArchitecture:(unsigned long long)a0;
- (id)_descriptionForChargerPolicy:(unsigned long long)a0;
- (id)_descriptionForUpdateType:(unsigned long long)a0;
- (unsigned long long)chargerPolicy;
- (char)connectedToAC;
- (unsigned long long)percentBatteryRemaining;
- (char)satisfiedWithError:(id *)a0;
- (void)setBatteryPercentageRequired:(unsigned long long)a0;
- (void)setChargerPolicy:(unsigned long long)a0;
- (void)setConnectedToAC:(char)a0;
- (void)setPercentBatteryRemaining:(unsigned long long)a0;

@end
