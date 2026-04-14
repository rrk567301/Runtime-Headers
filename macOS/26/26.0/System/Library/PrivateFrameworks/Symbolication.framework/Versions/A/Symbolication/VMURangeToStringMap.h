@class NSMutableArray;

@interface VMURangeToStringMap : NSObject <NSSecureCoding> {
    NSMutableArray *_strings;
    struct unordered_map<NSString *, unsigned int, NSStringHashFunctor, NSStringEqualsFunctor, std::allocator<std::pair<NSString *const, unsigned int>>> { struct __hash_table<std::__hash_value_type<NSString *, unsigned int>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, unsigned int>, NSStringHashFunctor, NSStringEqualsFunctor>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, unsigned int>, NSStringEqualsFunctor, NSStringHashFunctor>, std::allocator<std::__hash_value_type<NSString *, unsigned int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned int>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _stringToIndexMap;
    struct vector<RangeAndString, std::allocator<RangeAndString>> { struct *__begin_; struct *__end_; struct *__cap_; } _rangeAndStringVector;
    BOOL _sorted;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)sort;
- (void)enumerateHexAddressesInStrings:(id /* block */)a0;
- (unsigned int)uniquedStringCount;
- (id)stringForAddress:(unsigned long long)a0;
- (void)enumerateRanges:(id /* block */)a0;
- (unsigned int)count;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (unsigned int)indexForString:(id)a0 insertIfMissing:(BOOL)a1;
- (void)setString:(id)a0 forRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)stringForIndex:(unsigned int)a0;
- (id).cxx_construct;
- (void)resymbolicateStringsWithSymbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })rangeForString:(id)a0 startingAtAddress:(unsigned long long)a1;
- (void).cxx_destruct;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })rangeContainingAddress:(unsigned long long)a0;

@end
