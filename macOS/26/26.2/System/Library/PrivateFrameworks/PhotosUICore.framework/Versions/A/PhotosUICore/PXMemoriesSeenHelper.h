@class NSObject;
@protocol OS_dispatch_queue;

@interface PXMemoriesSeenHelper : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

+ (id)defaultHelper;

- (void).cxx_destruct;
- (id)init;
- (void)_clearPendingNotificationForMemory:(id)a0;
- (void)clearAnyPendingNotificationsFromMemories:(id)a0;
- (void)clearAnyPendingStateFromMemories:(id)a0;

@end
