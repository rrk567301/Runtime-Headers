@class NSObject, NSMutableData, NSFileHandle;
@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_semaphore;

@interface SecAsyncPiper : NSObject

@property (retain) NSFileHandle *readHandle;
@property (retain) NSObject<OS_xpc_object> *writeXpcFd;
@property (retain) NSMutableData *bigData;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_semaphore> *semaForTestingOnly;

+ (void)forTestingOnlySetFailPipe:(BOOL)a0;
+ (void)forTestingOnlySetFailXpcFdWrapping:(BOOL)a0;

- (id)initWithError:(id *)a0;
- (void).cxx_destruct;
- (void)waitAndReleaseFd_ForTestingOnly;
- (id)dictWithError:(id *)a0;
- (void)moreData;
- (id)xpcFd;

@end
