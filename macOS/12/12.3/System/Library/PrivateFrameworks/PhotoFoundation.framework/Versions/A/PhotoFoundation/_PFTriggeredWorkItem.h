@class NSMutableArray;

@interface _PFTriggeredWorkItem : PFInitializationClassWorkItem {
    NSMutableArray *_triggeredWorkItems;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _triggeredWorkItemsLock;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)addTriggeredWorkItem:(id)a0;
- (void)performInitialization;
- (void)triggerWorkItems;
- (void)doOneWorkItem;
- (BOOL)runsWorkItemsConcurrently;
- (void)doAllWorkItems;

@end
