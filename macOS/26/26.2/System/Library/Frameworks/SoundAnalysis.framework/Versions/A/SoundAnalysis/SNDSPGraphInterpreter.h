@interface SNDSPGraphInterpreter : NSObject {
    struct unique_ptr<DSPGraph::Interpreter, std::default_delete<DSPGraph::Interpreter>> { struct { struct Interpreter *__ptr_; } ; } _interpreter;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;

@end
