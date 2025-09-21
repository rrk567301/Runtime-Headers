@interface CPLPushToTransportSyncStep : CPLSimpleTaskSyncStep

@property (readonly, nonatomic) char highPriority;

- (void)cancelAllTasks:(char)a0;
- (id)newTask;
- (id)initWithSyncManager:(id)a0 syncSession:(id)a1 highPriority:(char)a2;

@end
