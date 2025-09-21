@class NSArray;

@interface _NSOrderedRangeIndexer : NSObject {
    struct shared_ptr<_NSOrderedRangeIndexerImpl> { struct _NSOrderedRangeIndexerImpl *__ptr_; struct __shared_weak_count *__cntrl_; } _orderedRangeIndexerImpl;
}

@property (readonly, nonatomic) long long numberOfRanges;
@property (readonly, nonatomic) NSArray *orderedRanges;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } containingRange;

- (id)init;
- (id)description;
- (id).cxx_construct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeContainingLocation:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(long long)a0;
- (void)appendRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)indexOfRangeContainingLocation:(long long)a0;
- (void).cxx_destruct;

@end
