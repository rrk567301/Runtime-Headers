@interface USOGraph : NSObject <NSSecureCoding> {
    struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> { struct UsoGraph *__ptr_; } _usoGraph;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void *)getCppGraph;
- (void *)getCppRootNode;
- (id)getRoot;
- (id)createEntityNode:(const void *)a0;
- (id)createIntNode:(id)a0;
- (id)createOperatorNode:(const void *)a0;
- (id)createStringNode:(id)a0;
- (id)createTaskNode:(const void *)a0 verb:(const void *)a1;
- (id)initWithCppUsoGraph:(struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> { struct UsoGraph *x0; })a0;

@end
