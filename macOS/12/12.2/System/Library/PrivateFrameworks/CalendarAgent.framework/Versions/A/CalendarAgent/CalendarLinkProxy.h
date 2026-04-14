@class CalNWideQueue, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CalendarLinkProxy : NSObject <CalendarLink>

@property (retain) NSObject<OS_dispatch_group> *delayForCoreDataGroup;
@property (retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (retain) CalNWideQueue *nWideQueue;

+ (BOOL)_validateSelectorName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)broadcastNotificationToOtherClients:(id)a0 userInfo:(id)a1;
- (void)registerWithAgent;
- (void)updateClientSideCacheWithReply:(id /* block */)a0;

@end
