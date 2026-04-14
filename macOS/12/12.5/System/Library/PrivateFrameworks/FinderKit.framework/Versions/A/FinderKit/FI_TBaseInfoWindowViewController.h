@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface FI_TBaseInfoWindowViewController : FI_TViewController <TMarkTornDown> {
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } _targetNodes;
    NSArray *_valueControllers;
    struct TRef<NSObject<OS_dispatch_queue> *, TRetainReleasePolicy<dispatch_queue_t>> { NSObject<OS_dispatch_queue> *fRef; } _prefetchValuesQueue;
}

@property (retain, nonatomic) NSArray *valueControllers;
@property (getter=isTornDown) BOOL tornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controller;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)aboutToTearDown;
- (void)refresh;
- (void)configureView;
- (const void *)targetNodes;
- (void)setTargetNodes:(const void *)a0;
- (void)loadValueControllers;
- (void)setValueControllers:(id)a0;
- (void)prefetchValues:(const void *)a0;
- (id)valueControllers;
- (void)targetNodesChanging;
- (void)targetNodesChanged;
- (unsigned int)notificationOptionsForNodes:(const void *)a0;
- (void)bulkNodesChanged:(const void *)a0;
- (void)bulkNodesDeleted:(const void *)a0;
- (void)nodesGoingAway:(const void *)a0;
- (void)nodeMDAttributeChanged:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 attributes:(id)a1 isDisplayAttributes:(BOOL)a2;

@end
