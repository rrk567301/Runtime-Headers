@interface IMSpotlightActivityMonitor : NSObject <IMSpotlightActivityMonitoring> {
    void /* unknown type, empty encoding */ state;
}

+ (id)sharedMonitor;

- (void)addMonitor:(id)a0;
- (void)removeMonitor:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)connectionDied;
- (void)searchableItemsDeletedWithIdentifiers:(id)a0 forDomainIdentifier:(id)a1 context:(id)a2;
- (void)searchableItemsDidUpdateWithIdentifiers:(id)a0 forDomainIdentifier:(id)a1 context:(id)a2;

@end
