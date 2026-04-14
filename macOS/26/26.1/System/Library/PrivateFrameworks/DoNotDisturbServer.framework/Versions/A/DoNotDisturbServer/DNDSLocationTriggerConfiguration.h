@class NSMutableDictionary;

@interface DNDSLocationTriggerConfiguration : NSObject {
    NSMutableDictionary *_modeIdentifierByRegionIdentifier;
    NSMutableDictionary *_regionByRegionIdentifier;
}

+ (id)emptyConfiguration;

- (id)regions;
- (id)regionIdentifiers;
- (void)addTriggerForModeWithIdentifier:(id)a0 forRegion:(id)a1;
- (id)modeIdentifierForRegion:(id)a0;
- (id)regionForRegionIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
