@class NSObject;
@protocol OS_dispatch_queue, KGMutableGraphImplementation;

@interface KGMutableGraph : KGGraph

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue;
@property (readonly, nonatomic) id<KGMutableGraphImplementation> mutableImplementation;

- (void).cxx_destruct;
- (char)performChangesAndWait:(id)a0 error:(id *)a1;
- (char)_applyNodeChangeRequests:(id)a0 error:(id *)a1;
- (char)_applyEdgeChangeRequests:(id)a0 error:(id *)a1;
- (char)_performChangesAndWait:(id)a0 error:(id *)a1;
- (id)initWithMutableImplementation:(id)a0 entityFactory:(id)a1;

@end
