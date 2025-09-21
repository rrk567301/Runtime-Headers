@class CADSPSubsetModel, NSArray;

@interface CADSPSubset : NSObject {
    struct shared_ptr<AudioDSPGraph::Subset> { struct Subset *__ptr_; struct __shared_weak_count *__cntrl_; } _this;
}

@property (readonly, nonatomic) CADSPSubsetModel *model;
@property (readonly, copy, nonatomic) NSArray *boxes;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSubset:(struct shared_ptr<AudioDSPGraph::Subset> { struct Subset *x0; struct __shared_weak_count *x1; })a0 model:(id)a1 boxes:(id)a2;
- (BOOL)loadStrip:(id)a0 type:(unsigned int)a1 error:(id *)a2;
- (BOOL)loadStrip:(id)a0 type:(unsigned int)a1 withResourcePath:(id)a2 error:(id *)a3;
- (id)saveStrip:(unsigned int)a0 error:(id *)a1;

@end
