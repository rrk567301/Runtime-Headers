@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CUIKNotificationConflictCache : NSObject {
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_fetchQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_updateNotification:(id)a0 withCacheObject:(id)a1;
- (void)updateConflictsForNotification:(id)a0 synchronously:(BOOL)a1 withCompletion:(id /* block */)a2;
- (id)conflictsForNotification:(id)a0;

@end
