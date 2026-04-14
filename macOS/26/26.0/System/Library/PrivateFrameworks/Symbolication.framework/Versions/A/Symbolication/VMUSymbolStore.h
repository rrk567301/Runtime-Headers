@class VMUDebugTimer, NSMutableDictionary, NSData, VMUProcessObjectGraph;

@interface VMUSymbolStore : NSObject <NSSecureCoding> {
    VMUDebugTimer *_debugTimer;
    struct unordered_map<std::string, std::unordered_set<unsigned long long>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unordered_set<unsigned long long>>>> { struct __hash_table<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _addressesGroupedByUuid;
    struct unordered_set<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { struct __hash_table<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<unsigned long long, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _addressesTracker;
    NSData *_signature;
    BOOL _resymbolicatedSuccessfully;
    NSMutableDictionary *_resymbolicationUUIDs;
    BOOL _debugStore;
    unsigned long long backtraceSample;
    unsigned long long binarySection;
    unsigned long long globalVariable;
    unsigned long long mallocStackLogging;
    unsigned long long hexFromLabels;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) VMUProcessObjectGraph *graph;
@property (readonly, nonatomic) struct _CSTypeRef { unsigned long long _opaque_1; unsigned long long _opaque_2; } symbolicator;

- (BOOL)_readContentsOfDsymFile:(id)a0 error:(id *)a1;
- (void)addAddress:(unsigned long long)a0 origin:(int)a1;
- (id)initWithSymbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a0 debugTimer:(id)a1;
- (void)dealloc;
- (id)_createResymbolicatedSignature;
- (void)_extractAddressesFromSymbolicator;
- (void)encodeWithCoder:(id)a0;
- (void)addBacktrace:(id)a0 origin:(int)a1;
- (BOOL)_getDsymPathsForUUIDs:(id)a0 andReportProgress:(id)a1;
- (void)_groupAddressTrackerByUuid;
- (void)_flagSymbolOwnersForResymbolication;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (BOOL)resymbolicateWithDsymPath:(id)a0 libraryNames:(id)a1 all:(BOOL)a2 progress:(id)a3 showDebugInfo:(BOOL)a4 error:(id *)a5;
- (id)_createSymbolicatorSignature;
- (BOOL)_refillSymbolOwnersWithDataAndReportProgress:(id)a0;
- (void).cxx_destruct;

@end
