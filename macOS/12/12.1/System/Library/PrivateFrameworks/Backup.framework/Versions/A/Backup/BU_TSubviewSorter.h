@interface BU_TSubviewSorter : NSObject

@property (nonatomic) struct function<NSComparisonResult (__kindof NSView *, __kindof NSView *)> { struct __value_func<NSComparisonResult (__kindof NSView *, __kindof NSView *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } sortComparator;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)sortSubviewsForView:(id)a0;

@end
