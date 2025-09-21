@interface SNDSPGraphInterpreter : NSObject {
    struct unique_ptr<DSPGraph::Interpreter, std::default_delete<DSPGraph::Interpreter>> { struct Interpreter *__ptr_; } _interpreter;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
