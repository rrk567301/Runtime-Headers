@class NSString, TGIE5BaseModelObjC, NSSet;

@interface TGIE5ModelConfigurationObjC : NSObject <NSCopying, NSMutableCopying>

@property (copy) NSString *serializeModelIOPath;
@property (retain) TGIE5BaseModelObjC *baseModel;
@property BOOL useEnergyEfficientMode;
@property BOOL useModelCatalogE5CompilerCache;
@property (copy) NSString *assetIdentifier;
@property (readonly) long long modelType;
@property (readonly, copy) NSString *modelBundlePath;
@property (readonly, copy) NSSet *adapterConfigurations;
@property (readonly, copy) NSSet *e5Functions;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (struct TGIE5ModelConfiguration { int x0; struct path { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x1; struct vector<TGIE5AdapterConfiguration, std::allocator<TGIE5AdapterConfiguration>> { struct TGIE5AdapterConfiguration *x0; struct TGIE5AdapterConfiguration *x1; struct TGIE5AdapterConfiguration *x2; } x2; struct vector<TGIE5Function, std::allocator<TGIE5Function>> { struct TGIE5Function *x0; struct TGIE5Function *x1; struct TGIE5Function *x2; } x3; struct unordered_map<std::string, std::shared_ptr<E5RT::MemoryObject>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<E5RT::MemoryObject>>>> { struct __hash_table<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, void *> *> *>> { unsigned long long x0; } x1; } x0; struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, void *> *> { void *x0; } x1; unsigned long long x2; float x3; } x0; } x4; struct path { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x5; BOOL x6; })modelConfiguration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithModelType:(long long)a0 modelBundlePath:(id)a1 e5Functions:(id)a2 adapterConfigurations:(id)a3;

@end
