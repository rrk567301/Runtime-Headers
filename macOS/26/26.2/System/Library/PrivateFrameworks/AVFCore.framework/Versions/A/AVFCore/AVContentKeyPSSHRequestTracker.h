@class NSMutableArray;

@interface AVContentKeyPSSHRequestTracker : NSObject {
    long long _totalExpectedRequestCount;
    NSMutableArray *_requests;
}

- (void)addRequest:(id)a0;
- (id)requests;
- (void)dealloc;
- (BOOL)haveAllRequestsBeenReceived;
- (id)initWithRequestCount:(long long)a0;

@end
