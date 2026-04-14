@interface RTPOIHarvestParameters : NSObject

@property (readonly, nonatomic) unsigned long long harvestMask;
@property (readonly, nonatomic) double locationLookupWindowMaxMinutes;
@property (readonly, nonatomic) double locationLookupWindowMinMinutes;
@property (readonly, nonatomic) double locationUncertaintyThreshold;
@property (readonly, nonatomic) unsigned long long maxLocationsPerFingerprint;

- (id)init;
- (id)description;
- (id)initWithDefaultsManager:(id)a0;
- (id)initWithHarvestMask:(unsigned long long)a0 locationLookupWindowMaxMinutes:(double)a1 locationLookupWindowMinMinutes:(double)a2 locationUncertaintyThreshold:(double)a3 maxLocationsPerFingerprint:(unsigned long long)a4;

@end
