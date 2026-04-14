@class NSObject;
@protocol OS_dispatch_semaphore;

@interface BOSQueryCurrentStateOperation : BOSOperation

@property (retain) NSObject<OS_dispatch_semaphore> *queryComplete;

- (void)cancel;
- (void)main;
- (id)description;
- (BOOL)_shouldPurge;
- (void).cxx_destruct;

@end
