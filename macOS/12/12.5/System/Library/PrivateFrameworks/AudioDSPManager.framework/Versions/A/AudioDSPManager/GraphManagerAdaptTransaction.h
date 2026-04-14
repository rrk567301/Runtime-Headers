@class GraphState;

@interface GraphManagerAdaptTransaction : NSObject {
    struct unique_ptr<adm::MutateGraph, std::default_delete<adm::MutateGraph>> { struct __compressed_pair<adm::MutateGraph *, std::default_delete<adm::MutateGraph>> { struct MutateGraph *__value_; } __ptr_; } _mutateGraph;
}

@property (readonly, nonatomic) unsigned long long transactionNumber;
@property (retain, nonatomic) GraphState *originalState;
@property (retain, nonatomic) GraphState *adaptedState;

- (void).cxx_destruct;
- (id).cxx_construct;
- (const void *)mutateGraph;
- (id)initWithOriginalState:(id)a0 adaptedState:(id)a1 graphBuilder:(const void *)a2;
- (void)logTransaction;

@end
