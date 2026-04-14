@class NSArray, NSDictionary, NSObject, NSMutableArray, NSMutableSet, NWNetworkOfInterestManager, AMSMutablePromise;
@protocol OS_dispatch_queue;

@interface AMSNetworkQualityInquiry : NSObject <NWNetworkOfInterestManagerDelegate> {
    NWNetworkOfInterestManager *_manager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_knownNetworks;
    NSMutableArray *_knownNetworksReadyHandlers;
    NSArray *_lastKnownReports;
    long long _lastReportRefreshTimestamp;
    AMSMutablePromise *_currentInvestigation;
}

@property (class, readonly) AMSNetworkQualityInquiry *sharedInstance;
@property (class, readonly) NSDictionary *lastConnectionReport;

@property (copy) NSDictionary *lastConnectionReport;

+ (BOOL)isEntitled;
+ (id)reportForConnectionInterface:(id)a0 fromReports:(id)a1;

- (void)drainKnownNetworksReadyHandlers;
- (void)didStopTrackingNOI:(id)a0;
- (void).cxx_destruct;
- (void)performWhenKnownNetworksReady:(id /* block */)a0;
- (id)investigateNetworks;
- (void)didStartTrackingNOI:(id)a0;
- (BOOL)areKnownNetworksReady;
- (id)init;
- (void)didStopTrackingAllNOIs:(id)a0;
- (void)updateLastConnectionReportWithTask:(id)a0;
- (void)dealloc;

@end
