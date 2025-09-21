@interface PodcastsFoundation.ICReachability : _TtCs12_SwiftObject <PFReachability> {
    void /* unknown type, empty encoding */ environmentMonitor;
}

@property (nonatomic, readonly) char isReachable;
@property (nonatomic, readonly) char isReachableViaWifi;
@property (nonatomic, readonly) char isReachableViaCellular;
@property (nonatomic, readonly) char isGlobalCellularEnabled;
@property (nonatomic, readonly) char isPodcastsCellularDownloadsEnabled;

@end
