@class OS_dispatch_queue;

@interface IMDSpotlightActivityPublisher : NSObject <IMSpotlightActivityMonitoring, IMDSpotlightActivityMonitorQueries> {
    void /* unknown type, empty encoding */ monitors;
}

@property (nonatomic, retain) OS_dispatch_queue *queue;

+ (id)sharedPublisher;

- (id)init;
- (void).cxx_destruct;
- (void)addActivityMonitor:(id)a0 withID:(id)a1;
- (void)enumerateActivityMonitorsUsingBlock:(id /* block */)a0;
- (void)publishItems:(id)a0 context:(id)a1;
- (void)publishRejections:(id)a0 context:(id)a1;
- (void)removeActivityMonitorWithID:(id)a0;
- (void)searchableItemsDeletedWithIdentifiers:(id)a0 forDomainIdentifier:(id)a1 context:(id)a2;
- (void)searchableItemsDidUpdateWithIdentifiers:(id)a0 forDomainIdentifier:(id)a1 context:(id)a2;

@end
