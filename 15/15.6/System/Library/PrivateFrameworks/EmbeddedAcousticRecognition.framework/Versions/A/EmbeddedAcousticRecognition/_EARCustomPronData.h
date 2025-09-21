@interface _EARCustomPronData : NSObject

@property (nonatomic) struct shared_ptr<quasar::CustomPronData> { struct CustomPronData *__ptr_; struct __shared_weak_count *__cntrl_; } data;

- (char)isValid;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)validationError;
- (id)getProns;
- (id)getRejectedProns;
- (id)initWithCustomPronData:(struct shared_ptr<quasar::CustomPronData> { struct CustomPronData *x0; struct __shared_weak_count *x1; })a0;

@end
