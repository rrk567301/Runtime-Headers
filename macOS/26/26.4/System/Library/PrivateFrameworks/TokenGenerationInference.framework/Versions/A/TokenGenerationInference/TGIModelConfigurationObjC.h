@class NSString, TGIE5BaseModelObjC, NSSet;

@interface TGIModelConfigurationObjC : NSObject <NSCopying, NSMutableCopying>

@property (copy) NSString *serializeModelIOPath;
@property (retain) TGIE5BaseModelObjC *baseModel;
@property BOOL useEnergyEfficientMode;
@property BOOL useModelCatalogE5CompilerCache;
@property BOOL ignoreUnknownTokens;
@property (copy) NSString *assetIdentifier;
@property (readonly) long long modelType;
@property (readonly, copy) NSString *modelBundlePath;
@property (readonly, copy) NSSet *adapterConfigurations;
@property (readonly, copy) NSSet *e5Functions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (struct TGIModelConfiguration { int x0; struct path { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x0; } x1; struct vector<TGIAdapterConfiguration, std::allocator<TGIAdapterConfiguration>> { struct TGIAdapterConfiguration *x0; struct TGIAdapterConfiguration *x1; struct { struct TGIAdapterConfiguration *x0; } x2; } x2; struct vector<TGIE5Function, std::allocator<TGIE5Function>> { struct TGIE5Function *x0; struct TGIE5Function *x1; struct { struct TGIE5Function *x0; } x2; } x3; struct unordered_map<std::string, std::shared_ptr<E5RT::MemoryObject>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<E5RT::MemoryObject>>>> { struct __hash_table<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, std::__unordered_map_hasher<std::string, std::pair<const std::string, std::shared_ptr<E5RT::MemoryObject>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::pair<const std::string, std::shared_ptr<E5RT::MemoryObject>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::pair<const std::string, std::shared_ptr<E5RT::MemoryObject>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, void *> *> *>>> { struct { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, void *> *> *>> { struct { unsigned long long x0; } x0; } x1; } x0; } x0; struct { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<E5RT::MemoryObject>>, void *> *> { void *x0; } x0; } x1; struct { unsigned long long x0; } x2; struct { float x0; } x3; } x0; } x4; struct path { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x0; } x5; BOOL x6; BOOL x7; })modelConfiguration;
- (id)description;
- (id)initWithModelType:(long long)a0 modelBundlePath:(id)a1 e5Functions:(id)a2 adapterConfigurations:(id)a3;

@end
