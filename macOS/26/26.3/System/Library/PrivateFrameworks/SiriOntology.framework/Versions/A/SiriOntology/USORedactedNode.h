@interface USORedactedNode : NSObject {
    struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> { struct { struct UsoGraph *__ptr_; } ; } mUsoGraph;
}

@property (nonatomic) long long index;
@property (nonatomic) struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> { struct { struct UsoGraph *x0; } x0; } usoGraph;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithIndex:(long long)a0 usoGraph:(void *)a1;

@end
