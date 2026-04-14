@interface SNDSPGraphBox : NSObject {
    void *_box;
    struct shared_ptr<DSPGraph::Graph> { struct Graph *__ptr_; struct __shared_weak_count *__cntrl_; } _graph;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;

@end
