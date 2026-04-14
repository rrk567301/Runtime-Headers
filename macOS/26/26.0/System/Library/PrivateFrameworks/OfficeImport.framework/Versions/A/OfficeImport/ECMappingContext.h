@class NSMutableDictionary, NSMutableArray;

@interface ECMappingContext : NSObject {
    struct map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> { struct __tree<std::__value_type<unsigned long, unsigned long>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned long>, std::less<unsigned long>>, std::allocator<std::__value_type<unsigned long, unsigned long>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } mIndexToMappedIndex;
    NSMutableDictionary *mSheetNameToMappedIndex;
    struct __CFDictionary { } *mObjectToMappingInfo;
    NSMutableArray *mMappingInfos;
}

+ (id)mappingContext;

- (void)dealloc;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)associateMappingInfo:(id)a0 withSheetName:(id)a1 andSheetIndex:(unsigned long long)a2 andObject:(id)a3;
- (unsigned long long)mappedSheetIndexForSheetIndex:(unsigned long long)a0;
- (unsigned long long)mappedSheetIndexForSheetName:(id)a0;
- (void *)mappedSheetNames;
- (id)mappingInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)mappingInfoCount;
- (id)mappingInfoForObject:(id)a0;

@end
