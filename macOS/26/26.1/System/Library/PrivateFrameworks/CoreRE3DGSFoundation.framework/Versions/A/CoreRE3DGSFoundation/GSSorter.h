@class GSSorterDescriptor;

@interface GSSorter : NSObject

@property (nonatomic) struct shared_ptr<apple3dgs::Sorter> { struct Sorter *__ptr_; struct __shared_weak_count *__cntrl_; } impl;
@property (retain) GSSorterDescriptor *sorterDescriptor;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 forAssets:(id)a1 error:(id *)a2;
- (BOOL)encodeSorting:(id)a0 forAssets:(id)a1 sorterDescriptor:(id)a2 renderDescriptor:(id)a3 error:(id *)a4;

@end
