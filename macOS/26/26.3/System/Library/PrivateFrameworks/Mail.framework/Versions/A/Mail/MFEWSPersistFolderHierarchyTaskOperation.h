@class MFEWSSyncFolderHierarchyBatch;
@protocol MFEWSPersistFolderHierarchyTaskOperationDelegate;

@interface MFEWSPersistFolderHierarchyTaskOperation : MFEWSPersistenceTaskOperation

@property (weak) id<MFEWSPersistFolderHierarchyTaskOperationDelegate> delegate;
@property (readonly, nonatomic) MFEWSSyncFolderHierarchyBatch *batch;

- (id)init;
- (void)main;
- (void).cxx_destruct;
- (id)initWithBatch:(id)a0;

@end
