@protocol CHSChronoToolServiceServer;

@interface CHSToolSupportService : NSObject

@property (readonly, nonatomic) id<CHSChronoToolServiceServer> server;

- (id)init;
- (void).cxx_destruct;
- (id)initWithServer:(id)a0;
- (void)cacheDescriptorsForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)listStateCaptureIdentifiersWithCompletion:(id /* block */)a0;
- (void)fetchStateWithCompletion:(id /* block */)a0;
- (void)fetchStateForItemWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)extensionInfoForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)widgetsWithTimelines:(id /* block */)a0;
- (void)timelineForWidgetKey:(id)a0 completion:(id /* block */)a1;
- (void)resetCaches:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)reloadTimelinesOfKind:(id)a0 containedIn:(id)a1 reason:(id)a2 completion:(id /* block */)a3;
- (void)expireLocationGracePeriods;
- (void)extensionInfo:(id /* block */)a0;

@end
