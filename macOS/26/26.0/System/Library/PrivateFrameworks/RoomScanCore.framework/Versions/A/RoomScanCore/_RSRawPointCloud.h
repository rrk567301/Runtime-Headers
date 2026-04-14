@interface _RSRawPointCloud : NSObject <RSRawPointCloud> {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; void *__cap_; } _points;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) const void *points;

- (id).cxx_construct;
- (void).cxx_destruct;

@end
