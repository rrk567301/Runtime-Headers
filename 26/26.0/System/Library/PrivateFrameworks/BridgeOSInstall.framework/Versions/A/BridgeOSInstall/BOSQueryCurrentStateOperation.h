@class NSObject;
@protocol OS_dispatch_semaphore;

@interface BOSQueryCurrentStateOperation : BOSOperation

@property (retain) NSObject<OS_dispatch_semaphore> *queryComplete;

- (void)main;
- (void)cancel;
- (BOOL)_shouldPurge;
- (id)description;
- (void).cxx_destruct;

@end
