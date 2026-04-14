@interface FI_TBVDSBulkConfigChangedState : NSObject

@property BOOL sortByChanged;
@property BOOL groupByChanged;
@property BOOL checkChildrenForTagsChanged;
@property struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } sortByCompletionHandler;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
