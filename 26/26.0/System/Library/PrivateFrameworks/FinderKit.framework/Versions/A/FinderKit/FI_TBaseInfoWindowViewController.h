@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface FI_TBaseInfoWindowViewController : FI_TViewController <TMarkTornDown> {
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct TFENode *__cap_; } _targetNodes;
    NSArray *_valueControllers;
    NSObject<OS_dispatch_queue> *_prefetchValuesQueue;
}

@property (retain, nonatomic) NSArray *valueControllers;
@property (getter=isTornDown) BOOL tornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controller;

- (void)refresh;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)aboutToTearDown;
- (void)configureView;
- (void)nodesGoingAway:(const void *)a0;
- (void)prefetchValues:(const void *)a0;
- (void)setTargetNodes:(const void *)a0;
- (void)bulkNodesChanged:(const void *)a0;
- (void)bulkNodesDeleted:(const void *)a0;
- (void)loadValueControllers;
- (void)nodeMDAttributeChanged:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 attributes:(id)a1 isDisplayAttributes:(BOOL)a2;
- (unsigned int)notificationOptionsForNodes:(const void *)a0;
- (const void *)targetNodes;
- (void)targetNodesChanged;
- (void)targetNodesChanging;

@end
