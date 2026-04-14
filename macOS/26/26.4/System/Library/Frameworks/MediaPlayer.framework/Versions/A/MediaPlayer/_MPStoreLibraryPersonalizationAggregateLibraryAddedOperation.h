@class MPMediaLibraryView;

@interface _MPStoreLibraryPersonalizationAggregateLibraryAddedOperation : MPAsyncOperation

@property (nonatomic) MPMediaLibraryView *libraryView;
@property (nonatomic) struct vector<long long, std::allocator<long long>> { long long *__begin_; long long *__end_; struct { long long *__cap_; } ; } persistentIDs;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)execute;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
