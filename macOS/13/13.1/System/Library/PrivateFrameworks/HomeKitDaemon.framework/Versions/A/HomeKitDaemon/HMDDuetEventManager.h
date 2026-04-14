@class NSNotificationCenter, NSObject;
@protocol OS_dispatch_queue, _DKKnowledgeSaving, _DKKnowledgeEventStreamDeleting, _DKKnowledgeQuerying, _CDAsyncLocalContext;

@interface HMDDuetEventManager : HMFObject

@property (readonly) id<_CDAsyncLocalContext> context;
@property (readonly) id<_DKKnowledgeSaving> saveStore;
@property (readonly) id<_DKKnowledgeEventStreamDeleting> deleteStore;
@property (readonly) id<_DKKnowledgeQuerying> queryStore;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSNotificationCenter *notificationCenter;

+ (id)eventTypeAsString:(unsigned long long)a0;
+ (id)eventStreamForType:(unsigned long long)a0;
+ (id)identifierForType:(unsigned long long)a0 eventValue:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_handleHomeRemovedNotification:(id)a0;
- (void)_handleAccessoryRemovedNotification:(id)a0;
- (void)_handleActionSetEmptiedNotification:(id)a0;
- (void)_handleServiceRemovedNotification:(id)a0;
- (id)initWithSaveStore:(id)a0 queryStore:(id)a1 deleteStore:(id)a2 clientContext:(id)a3 notificationCenter:(id)a4 workQueue:(id)a5;
- (id)queryEventsOfType:(unsigned long long)a0 fromDate:(id)a1 offset:(unsigned long long)a2 limit:(unsigned long long)a3;
- (void)deleteEventsOfType:(unsigned long long)a0 fromDate:(id)a1;
- (void)resetAllEvents;
- (id)dumpEventsOfType:(unsigned long long)a0 fromDate:(id)a1 offset:(unsigned long long)a2 limit:(unsigned long long)a3;
- (id)dumpAllEvents;

@end
