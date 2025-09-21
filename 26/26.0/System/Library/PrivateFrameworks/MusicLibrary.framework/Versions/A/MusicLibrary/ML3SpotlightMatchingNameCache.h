@class NSString, ML3MusicLibrary;

@interface ML3SpotlightMatchingNameCache : NSObject {
    struct unordered_set<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> { struct __hash_table<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<long long, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _matchingSet;
    NSString *_matchString;
    BOOL _idle;
    ML3MusicLibrary *_library;
}

+ (void)initialize;
+ (void)loadFromLibrary:(id)a0 namesMatchingString:(id)a1 cancelHandler:(id /* block */)a2;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithLibrary:(id)a0 matchString:(id)a1 cancelHandler:(id /* block */)a2;

@end
