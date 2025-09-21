@interface ETDataPointDictionary : NSObject

@property struct map<std::string, vImage_Buffer, std::less<std::string>, std::allocator<std::pair<const std::string, vImage_Buffer>>> { struct __tree<std::__value_type<std::string, vImage_Buffer>, std::__map_value_compare<std::string, std::__value_type<std::string, vImage_Buffer>, std::less<std::string>>, std::allocator<std::__value_type<std::string, vImage_Buffer>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } image_buffers;
@property struct map<std::string, float_buffer_t, std::less<std::string>, std::allocator<std::pair<const std::string, float_buffer_t>>> { struct __tree<std::__value_type<std::string, float_buffer_t>, std::__map_value_compare<std::string, std::__value_type<std::string, float_buffer_t>, std::less<std::string>>, std::allocator<std::__value_type<std::string, float_buffer_t>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } float_buffers;

- (float *)dataForKey:(id)a0 error:(id *)a1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dataArrayForKey:(id)a0 error:(id *)a1;
- (BOOL)setData:(float *)a0 size:(unsigned long long)a1 forKey:(id)a2 freeWhenDone:(BOOL)a3;
- (BOOL)setImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 forKey:(id)a1;

@end
