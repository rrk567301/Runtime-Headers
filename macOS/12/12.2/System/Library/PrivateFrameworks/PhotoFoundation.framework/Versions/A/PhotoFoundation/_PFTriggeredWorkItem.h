@class NSMutableArray;

@interface _PFTriggeredWorkItem : PFInitializationClassWorkItem {
    NSMutableArray *_triggeredWorkItems;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _triggeredWorkItemsLock;
}

- (id)init;
- (void).cxx_destruct;
- (void)performInitialization;
- (BOOL)addTriggeredWorkItem:(id)a0;
- (BOOL)runsWorkItemsConcurrently;
- (void)doOneWorkItem;
- (void)doAllWorkItems;
- (void)triggerWorkItems;

@end
