@interface GSSorterDescriptor : NSObject

@property (nonatomic) struct shared_ptr<apple3dgs::SorterDescriptor> { struct SorterDescriptor *__ptr_; struct __shared_weak_count *__cntrl_; } impl;
@property (nonatomic) unsigned int sortingMode;
@property (nonatomic) unsigned int sortingHardware;
@property (nonatomic) unsigned int sortingAlgorithm;
@property (nonatomic) unsigned int cullingMode;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setSortingMode:(unsigned int)a0;
- (unsigned int)sortingMode;
- (unsigned int)sortingHardware;
- (void)setCullingMode:(unsigned int)a0;
- (unsigned int)cullingMode;
- (void)setSortingAlgorithm:(unsigned int)a0;
- (void)setSortingHardware:(unsigned int)a0;
- (unsigned int)sortingAlgorithm;

@end
