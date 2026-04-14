@class NSMutableDictionary;

@interface DNDSLocationTriggerConfiguration : NSObject {
    NSMutableDictionary *_modeIdentifierByRegionIdentifier;
    NSMutableDictionary *_regionByRegionIdentifier;
}

+ (id)emptyConfiguration;

- (id)modeIdentifierForRegion:(id)a0;
- (id)regions;
- (id)regionIdentifiers;
- (void).cxx_destruct;
- (void)addTriggerForModeWithIdentifier:(id)a0 forRegion:(id)a1;
- (id)init;
- (id)regionForRegionIdentifier:(id)a0;

@end
