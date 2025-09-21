@interface FTTapToBox : NSObject {
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> { struct EspressoNet *__ptr_; } _net;
    struct PixelBufferTensor { void /* function */ **_vptr$Tensor; int type_; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; unsigned long long *__cap_; } sizes_; } shape_; struct shared_ptr<ik::TensorStorage> { struct TensorStorage *__ptr_; struct __shared_weak_count *__cntrl_; } storage_; } _inputImageTensor;
    struct PixelBufferTensor { void /* function */ **_vptr$Tensor; int type_; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; unsigned long long *__cap_; } sizes_; } shape_; struct shared_ptr<ik::TensorStorage> { struct TensorStorage *__ptr_; struct __shared_weak_count *__cntrl_; } storage_; } _inputTapTensor;
    struct unordered_map<std::string, ik::Tensor, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, ik::Tensor>>> { struct __hash_table<std::__hash_value_type<std::string, ik::Tensor>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, ik::Tensor>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, ik::Tensor>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, ik::Tensor>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _inputMap;
    struct EspressoTensor { void /* function */ **_vptr$Tensor; int type_; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; unsigned long long *__cap_; } sizes_; } shape_; struct shared_ptr<ik::TensorStorage> { struct TensorStorage *__ptr_; struct __shared_weak_count *__cntrl_; } storage_; } _outputTensor;
}

+ (id)networkPath;
+ (double)defaultConfidenceThreshold;
+ (id)networkDescriptor;
+ (struct CGSize { double x0; double x1; })networkInputImageSize;
+ (struct CGSize { double x0; double x1; })networkInputTapImageSize;
+ (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; })postProcessNetworkOutput:(const struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0;
+ (BOOL)preprocessForTap:(struct CGPoint { double x0; double x1; })a0 inSourceImageBuffer:(struct __CVBuffer { } *)a1 destinationImageBuffer:(struct __CVBuffer { } *)a2 tapBuffer:(struct __CVBuffer { } *)a3 scaler:(id)a4;
+ (BOOL)renderTap:(struct CGPoint { double x0; double x1; })a0 inBuffer:(struct __CVBuffer { } *)a1;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })predictBoxForTap:(struct CGPoint { double x0; double x1; })a0 inBuffer:(struct __CVBuffer { } *)a1 scaler:(id)a2;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; })predictionForTap:(struct CGPoint { double x0; double x1; })a0 inBuffer:(struct __CVBuffer { } *)a1 scaler:(id)a2;

@end
