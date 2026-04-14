@class NSArray, NSDictionary, NSObject, NSMutableArray, NSMutableSet, NWNetworkOfInterestManager, AMSPromise;
@protocol OS_dispatch_queue;

@interface AMSNetworkQualityInquiry : NSObject <NWNetworkOfInterestManagerDelegate> {
    NSArray *_lastKnownReports;
    long long _lastReportRefreshTimestamp;
    AMSPromise *_currentInvestigation;
}

@property (class, readonly) AMSNetworkQualityInquiry *sharedInstance;
@property (class, readonly) NSDictionary *lastConnectionReport;

@property (readonly, nonatomic) NWNetworkOfInterestManager *manager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableSet *knownNetworks;
@property (retain, nonatomic) NSMutableArray *knownNetworksReadyHandlers;

+ (id)reportForTask:(id)a0 fromReports:(id)a1;
+ (BOOL)isEntitled;
+ (void)updateLastConnectionReportWithTask:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)investigateNetworks;
- (void)performWhenKnownNetworksReady:(id /* block */)a0;
- (BOOL)areKnownNetworksReady;
- (void)drainKnownNetworksReadyHandlers;
- (void)didStopTrackingNOI:(id)a0;
- (void)didStartTrackingNOI:(id)a0;
- (void)didStopTrackingAllNOIs:(id)a0;

@end
