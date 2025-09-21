@class NSString, NSArray, ETImagePreprocessor, __cap_, __end_;

@interface ETImageFolderDataProvider : NSObject <ETDataProvider> {
    struct vector<std::pair<NSString *, unsigned long>, std::allocator<std::pair<NSString *, unsigned long>>> { void *__begin_; void *__end_; void *__cap_; } samples;
    struct vector<NSString *, std::allocator<NSString *>> { __end_ **__begin_; __cap_ **x0; id *x1; } classes;
    struct shared_ptr<Espresso::blob_cpu> { struct blob_cpu *__ptr_; struct __shared_weak_count *__cntrl_; } labelBlob;
    NSString *imageTensorName;
    NSString *labelTensorName;
    NSArray *labelShape;
    struct linear_congruential_engine<unsigned int, 48271U, 0U, 2147483647U> { unsigned int __x_; } randomgen;
    ETImagePreprocessor *imageProcessor;
    BOOL shuffleBeforeEpoch;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)prepareForEpoch;
- (id)dataPointAtIndex:(unsigned long long)a0 error:(id *)a1;
- (unsigned long long)numberOfDataPoints;
- (id)initWithFolder:(id)a0 forImageTensor:(id)a1 andLabelTensor:(id)a2 shuffleBeforeEachEpoch:(BOOL)a3 shuffleRandomSeed:(id)a4 withImagePreprocessParams:(id)a5;

@end
