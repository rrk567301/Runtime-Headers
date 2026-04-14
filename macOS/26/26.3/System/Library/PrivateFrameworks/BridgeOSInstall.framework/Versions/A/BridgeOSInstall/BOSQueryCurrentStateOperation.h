@class NSObject;
@protocol OS_dispatch_semaphore;

@interface BOSQueryCurrentStateOperation : BOSOperation

@property (retain) NSObject<OS_dispatch_semaphore> *queryComplete;

- (void)cancel;
- (id)description;
- (BOOL)_shouldPurge;
- (void)main;
- (void).cxx_destruct;

@end
