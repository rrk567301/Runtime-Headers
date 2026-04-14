@class NSMutableDictionary;

@interface IDSDaemonRequestTimer : NSObject {
    NSMutableDictionary *_requestContextMap;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _requestContextMapLock;
}

- (void)_criticalInvokeTimeoutBlockForRequestID:(id)a0;
- (id)invalidateTimeoutsAndReturnHandlersForAllRequests;
- (id)invalidateTimeoutAndReturnHandlerForRequestID:(id)a0;
- (void).cxx_destruct;
- (long long)inFlightRequestCount;
- (void)_accessRequestContextMapInCriticalSectionWithBlock:(id /* block */)a0;
- (id)_criticalInvalidateTimeoutAndReturnHandlerForRequestID:(id)a0;
- (void)_handleSystemTimerFired:(id)a0;
- (id)_criticalFindRequestContextWithResponseHandler:(id)a0;
- (id)scheduleTimeoutWithResponseHandler:(id)a0 timeoutInterval:(double)a1 timeoutBlock:(id /* block */)a2;
- (id)init;
- (void)dealloc;

@end
