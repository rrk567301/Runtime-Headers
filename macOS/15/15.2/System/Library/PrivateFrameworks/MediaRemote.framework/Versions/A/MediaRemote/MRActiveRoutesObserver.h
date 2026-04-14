@class MRAVEndpoint, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface MRActiveRoutesObserver : NSObject {
    MRAVEndpoint *_activeEndpoint;
}

@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) MRAVEndpoint *activeEndpoint;
@property (retain, nonatomic) NSArray *activeRouteIDs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
@property (retain, nonatomic) id lastFetchAttemptToken;
@property (nonatomic) BOOL supportNonLocalDevices;

+ (id)_computeActiveRouteIDsFromEndpoint:(id)a0;
+ (void)fetchActiveEndpointOnQueue:(id)a0 withCompletion:(id /* block */)a1;
+ (void)fetchActiveRouteIDsWithCompletion:(id /* block */)a0;

- (void).cxx_destruct;
- (void)_handleActiveSystemEndpointDidChange:(id)a0;
- (void)_handleActiveSystemEndpointOutputDevicesDidChange:(id)a0;
- (void)_onWorkerQueue_reevaluate;
- (void)_onWorkerQueue_reevaluateWithEndpoint:(id)a0;
- (void)_reevaluate;
- (void)_reevaluateWithEndpoint:(id)a0;
- (id)initWithActiveRouteIDsChangedCallback:(id /* block */)a0;

@end
