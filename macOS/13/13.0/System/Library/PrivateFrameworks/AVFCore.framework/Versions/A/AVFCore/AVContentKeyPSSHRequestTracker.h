@class NSMutableArray;

@interface AVContentKeyPSSHRequestTracker : NSObject {
    long long _totalExpectedRequestCount;
    NSMutableArray *_requests;
}

- (void)dealloc;
- (id)requests;
- (void)addRequest:(id)a0;
- (id)initWithRequestCount:(long long)a0;
- (BOOL)haveAllRequestsBeenReceived;

@end
