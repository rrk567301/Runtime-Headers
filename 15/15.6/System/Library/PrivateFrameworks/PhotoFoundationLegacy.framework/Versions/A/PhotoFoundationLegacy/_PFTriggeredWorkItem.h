@class NSMutableArray;

@interface _PFTriggeredWorkItem : PFInitializationClassWorkItem {
    NSMutableArray *_triggeredWorkItems;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _triggeredWorkItemsLock;
}

- (id)init;
- (void).cxx_destruct;
- (char)addTriggeredWorkItem:(id)a0;
- (void)doAllWorkItems;
- (void)doOneWorkItem;
- (void)performInitialization;
- (char)runsWorkItemsConcurrently;
- (void)triggerWorkItems;

@end
