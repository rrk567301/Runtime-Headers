@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ResourceArbiterClient : BaseResourceArbiterClient {
    unsigned int _ioConnect;
    struct IONotificationPort { } *_ioNotificationPort;
    unsigned int _ioNotificationObject;
    NSObject<OS_dispatch_queue> *_notificationPortQueue;
}

@property (readonly, nonatomic) unsigned int ioService;
@property (readonly, nonatomic) int clientPriority;
@property (readonly, nonatomic) int pendingResourceRequest;
@property (readonly, nonatomic) char resourceAccessStatus;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *sema;

- (void)dealloc;
- (id)initWithID:(int)a0;
- (void)_processResourceAccessStatus:(char)a0;
- (char)asynchRequestResourceAccess:(char)a0;
- (void)releaseResourceAccess;
- (void)resourceAccessGranted;
- (void)resourceAccessRevoked;
- (char)synchRequestResourceAccess;

@end
