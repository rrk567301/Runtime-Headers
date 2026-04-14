@class NSMutableSet;

@interface TSCERemoteDataSpecifierSet : NSObject <NSCopying> {
    struct unordered_map<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>>> { struct __hash_table<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, std::hash<unsigned long>, std::equal_to<unsigned long>>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, std::equal_to<unsigned long>, std::hash<unsigned long>>, std::allocator<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSMutableSet<TSCERemoteDataSpecifier *> *>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _coldDataByYear;
}

@property (retain, nonatomic) NSMutableSet *hotData;
@property (readonly, nonatomic) unsigned long long count;

+ (id)set;
+ (id)setWithSpecifier:(id)a0;
+ (id)setWithSpecifierArray:(id)a0;
+ (id)setWithSpecifiers:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (id).cxx_construct;
- (unsigned long long)hash;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)allSymbols;
- (id)hotSpecifierSet;
- (id)setByRemovingSpecifiersFromSet:(id)a0;
- (id)yearsReferenced;
- (id)allSpecifiers;
- (id)coldSpecifierArrayForYear:(unsigned long long)a0;
- (id)coldSpecifierSet;
- (id)coldSpecifiers;
- (id)coldSpecifiersForYear:(unsigned long long)a0;
- (BOOL)containsColdSpecifiers;
- (BOOL)containsSpecifier:(id)a0;
- (BOOL)containsSpecifiersFromSet:(id)a0;
- (BOOL)containsSpecifiersWithSymbol:(id)a0;
- (void)enumerateSpecifiersWithBlock:(id /* block */)a0;
- (id)hotSpecifierArray;
- (id)hotSpecifiers;
- (id)initWithSpecifierArray:(id)a0;
- (id)initWithSpecifiers:(id)a0;
- (void)insertSpecifier:(id)a0;
- (void)insertSpecifiersFromArray:(id)a0;
- (void)insertSpecifiersFromSet:(id)a0;
- (unsigned long long)p_coldSpecifierCount;
- (id)p_description:(BOOL)a0;
- (void)p_enumerateYearSetsWithBlock:(id /* block */)a0;
- (void)removeAllSpecifiers;
- (void)removeSpecifier:(id)a0;
- (void)removeSpecifiersFromArray:(id)a0;
- (void)removeSpecifiersFromSet:(id)a0;
- (id)setByIntersectingWithSet:(id)a0;
- (id)setByIntersectingWithSymbolsOfSet:(id)a0;
- (id)setByRemovingSpecifiersWithSymbols:(id)a0;
- (id)setOfSpecifiersContainedInSet:(id)a0;
- (id)setOfSpecifiersNotContainedInSet:(id)a0;
- (id)setOfSpecifiersPassingTest:(id /* block */)a0;
- (id)setOfSpecifiersWithDate:(id)a0;
- (id)setOfSpecifiersWithSymbol:(id)a0;
- (id)sortedArrayOfSpecifiers;

@end
