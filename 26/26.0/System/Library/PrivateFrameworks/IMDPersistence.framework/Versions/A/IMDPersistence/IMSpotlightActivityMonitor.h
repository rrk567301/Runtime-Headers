@interface IMSpotlightActivityMonitor : NSObject <IMSpotlightActivityMonitoring> {
    void /* unknown type, empty encoding */ state;
}

+ (id)sharedMonitor;

- (void)addMonitor:(id)a0;
- (void)removeMonitor:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)connectionDied;
- (void)searchableItemsDeletedWithIdentifiers:(id)a0 forDomainIdentifier:(id)a1 context:(id)a2;
- (void)searchableItemsDidUpdateWithIdentifiers:(id)a0 forDomainIdentifier:(id)a1 context:(id)a2;

@end
