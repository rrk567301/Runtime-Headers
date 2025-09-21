@class NSDate, NSString, NSArray, HMHomeManager, NSMutableSet, NSObject, NWNetworkOfInterestManager;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;

@interface CWFNetworkOfInterestManager : NSObject <NWNetworkOfInterestManagerDelegate, HMHomeManagerDelegate> {
    NSObject<OS_dispatch_queue> *_noiQueue;
    NSObject<OS_dispatch_semaphore> *_noiWaiter;
    NWNetworkOfInterestManager *_noiManager;
    HMHomeManager *_homeManager;
    NSArray *_trackedHomeNetworks;
    NSArray *_trackedWorkNetworks;
    NSMutableSet *_homekitHomeNetworks;
    NSDate *_lastHomeKitWiFiFetchTimestamp;
    NSObject<OS_dispatch_source> *_homeKitFetchTimer;
}

@property (copy) id /* block */ homeNetworkDeterminationChangedHandler;
@property (copy) id /* block */ workNetworkDeterminationChangedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)testHomeNetworks;

- (void)didStopTrackingNOI:(id)a0;
- (void)invalidate;
- (void)didStopTrackingAllNOIs:(id)a0;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)didStartTrackingNOI:(id)a0;
- (id)init;
- (void)activate;
- (void).cxx_destruct;
- (void)_homeNetworkDeterminationDidChange;
- (void)_workNetworkDeterminationDidChange;
- (void)fetchHomeWiFiInfoFromHomeKit;
- (long long)homeTypeForNetworkName:(id)a0;
- (long long)homeTypeForNetworkSignature:(id)a0;
- (long long)workTypeForNetworkName:(id)a0;
- (long long)workTypeForNetworkSignature:(id)a0;

@end
