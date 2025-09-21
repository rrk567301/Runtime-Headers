@class MFEWSSyncFolderHierarchyBatch;
@protocol MFEWSPersistFolderHierarchyTaskOperationDelegate;

@interface MFEWSPersistFolderHierarchyTaskOperation : MFEWSPersistenceTaskOperation

@property (weak) id<MFEWSPersistFolderHierarchyTaskOperationDelegate> delegate;
@property (readonly, nonatomic) MFEWSSyncFolderHierarchyBatch *batch;

- (void)main;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBatch:(id)a0;

@end
