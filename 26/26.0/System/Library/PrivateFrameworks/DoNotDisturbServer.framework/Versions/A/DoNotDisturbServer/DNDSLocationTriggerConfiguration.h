@class NSMutableDictionary;

@interface DNDSLocationTriggerConfiguration : NSObject {
    NSMutableDictionary *_modeIdentifierByRegionIdentifier;
    NSMutableDictionary *_regionByRegionIdentifier;
}

+ (id)emptyConfiguration;

- (id)regions;
- (id)modeIdentifierForRegion:(id)a0;
- (id)init;
- (void)addTriggerForModeWithIdentifier:(id)a0 forRegion:(id)a1;
- (id)regionIdentifiers;
- (id)regionForRegionIdentifier:(id)a0;
- (void).cxx_destruct;

@end
