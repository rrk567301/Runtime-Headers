@class MRActiveRoutesObserverOutputDeviceRemovedSnapshot, NSArray, MSVTimer, MRAVDistantEndpoint, NSObject, MRAVEndpoint;
@protocol OS_dispatch_queue;

@interface MRActiveRoutesObserver : NSObject {
    MRAVEndpoint *_activeEndpoint;
    BOOL _localDeviceAirPlayActive;
}

@property (copy, nonatomic) id /* block */ activeRouteIDsChangedCallback;
@property (copy, nonatomic) id /* block */ isLocalDeviceAirPlayActiveCallback;
@property (retain, nonatomic) MRAVEndpoint *activeEndpoint;
@property (retain, nonatomic) MRAVDistantEndpoint *activeEndpointSnapshot;
@property (retain, nonatomic) NSArray *activeRouteIDs;
@property (nonatomic) BOOL isLocalDeviceAirPlayActive;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
@property (retain, nonatomic) id lastFetchAttemptToken;
@property (nonatomic) BOOL supportNonLocalDevices;
@property (retain, nonatomic) MRActiveRoutesObserverOutputDeviceRemovedSnapshot *deviceRemovedSnapshot;
@property (nonatomic) double deviceRemovedWaitInterval;
@property (retain, nonatomic) MSVTimer *deviceRemovedWaitIntervalTimer;

+ (id)_computeActiveRouteIDsFromEndpoint:(id)a0 localDeviceInfo:(id)a1;
+ (void)fetchActiveEndpointOnQueue:(id)a0 withCompletion:(id /* block */)a1;
+ (void)fetchActiveRouteIDsWithCompletion:(id /* block */)a0;

- (void).cxx_destruct;
- (void)_handleActiveDeviceInfoDidChange:(id)a0;
- (void)_handleActiveSystemEndpointDidAddOutputDevice:(id)a0;
- (void)_handleActiveSystemEndpointDidChange:(id)a0;
- (void)_handleActiveSystemEndpointDidRemoveOutputDevice:(id)a0;
- (void)_onWorkerQueue_reevaluateAPA;
- (void)_onWorkerQueue_reevaluateASE;
- (void)_onWorkerQueue_reevaluateWithEndpoint:(id)a0;
- (void)_reevaluateAPA;
- (void)_reevaluateASE;
- (void)_reevaluateWithEndpoint:(id)a0;
- (id)initWithActiveRouteIDsChangedCallback:(id /* block */)a0;
- (id)initWithActiveRouteIDsChangedCallback:(id /* block */)a0 isLocalDeviceAirplayActiveChangedCallback:(id /* block */)a1;

@end
