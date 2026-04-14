@class NSURL;

@interface _VZDiskImage : NSObject {
    struct Descriptor { struct DiskImageFormat *format; struct PropertyBag { struct unordered_map<std::string, Base::PropertyBag::Value, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, Base::PropertyBag::Value>>> { struct __hash_table<std::__hash_value_type<std::string, Base::PropertyBag::Value>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Base::PropertyBag::Value>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Base::PropertyBag::Value>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, Base::PropertyBag::Value>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Base::PropertyBag::Value>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Base::PropertyBag::Value>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Base::PropertyBag::Value>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Base::PropertyBag::Value>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Base::PropertyBag::Value>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Base::PropertyBag::Value>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Base::PropertyBag::Value>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, Base::PropertyBag::Value>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Base::PropertyBag::Value>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Base::PropertyBag::Value>, std::hash<std::string>, std::equal_to<std::string>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Base::PropertyBag::Value>, std::equal_to<std::string>, std::hash<std::string>, true>> { float __value_; } __p3_; } __table_; } _properties; } parameters; struct DiskCapacity { unsigned int _block_size; struct BlockNumber { unsigned long long _value; } _block_count; } disk_capacity; } _descriptor;
}

@property (readonly, copy) NSURL *URL;
@property (readonly, getter=isReadOnly) BOOL readOnly;
@property (readonly) long long cachingMode;
@property (readonly) long long synchronizationMode;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithURL:(id)a0 readOnly:(BOOL)a1 error:(id *)a2;
- (id)initWithDescriptor:(id)a0 error:(id *)a1;
- (id)accessReturningError:(id *)a0;

@end
