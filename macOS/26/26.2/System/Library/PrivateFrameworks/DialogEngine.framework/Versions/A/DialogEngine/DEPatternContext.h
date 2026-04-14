@interface DEPatternContext : NSObject

@property struct shared_ptr<siri::dialogengine::PatternContext> { struct PatternContext *__ptr_; struct __shared_weak_count *__cntrl_; } This;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;
- (struct shared_ptr<siri::dialogengine::PatternContext> { struct PatternContext *x0; struct __shared_weak_count *x1; })getSharedPtr;
- (id)initWithSharedPtr:(void *)a0;

@end
