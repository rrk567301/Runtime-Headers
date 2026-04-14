@interface FI_TGenericPropertyValueApplicatorStub : FI_IPropertyValueApplicator

@property (nonatomic) struct function<int (NSObject *, const TFENodeVector &)> { struct __value_func<int (NSObject *, const TFENodeVector &)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } valueApplicator;
@property (nonatomic) struct function<bool (const TFENodeVector &)> { struct __value_func<bool (const TFENodeVector &)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } canModifyGetter;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)canModifyNodes:(const void *)a0;
- (int)applyValue:(id)a0 toNodes:(const void *)a1;

@end
