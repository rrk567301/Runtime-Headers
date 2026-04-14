@interface FI_TGenericPropertyValueExtractorStub : FI_IPropertyValueExtractor

@property (nonatomic) struct function<NSObject *(const TFENodeVector &)> { struct __value_func<NSObject *(const TFENodeVector &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } valueExtractor;
@property (nonatomic) struct function<bool (unsigned int)> { struct __value_func<bool (unsigned int)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } needsUpdateGetter;
@property (nonatomic) struct function<bool (const TFENodeVector &)> { struct __value_func<bool (const TFENodeVector &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } isApplicableGetter;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isApplicableToNodes:(const void *)a0;
- (id)extractValueFromNodes:(const void *)a0;
- (BOOL)needsUpdateForProperty:(unsigned int)a0;

@end
