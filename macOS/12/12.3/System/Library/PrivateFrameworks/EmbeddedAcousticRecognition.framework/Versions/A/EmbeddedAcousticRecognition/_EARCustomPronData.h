@interface _EARCustomPronData : NSObject

@property (nonatomic) struct shared_ptr<quasar::CustomPronData> { struct CustomPronData *__ptr_; struct __shared_weak_count *__cntrl_; } data;

- (BOOL)isValid;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithCustomPronData:(struct shared_ptr<quasar::CustomPronData> { struct CustomPronData *x0; struct __shared_weak_count *x1; })a0;
- (id)validationError;
- (id)getProns;
- (id)getRejectedProns;

@end
