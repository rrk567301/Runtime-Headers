@interface USORedactedNode : NSObject {
    struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> { struct UsoGraph *__ptr_; } mUsoGraph;
}

@property (nonatomic) long long index;
@property (nonatomic) struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> { struct UsoGraph *x0; } usoGraph;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithIndex:(long long)a0 usoGraph:(void *)a1;

@end
