@interface ASDDSPGraphInterpreter : NSObject {
    struct unique_ptr<DSPGraph::Interpreter, std::default_delete<DSPGraph::Interpreter>> { struct Interpreter *__ptr_; } _interpreter;
}

+ (id)compileFile:(id)a0 withSubstitutions:(id)a1 includingPaths:(id)a2;
+ (id)compileText:(id)a0 withSubstitutions:(id)a1 includingPaths:(id)a2;
+ (struct unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::string>>> { struct __hash_table<std::__hash_value_type<std::string, std::string>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::string>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>> { unsigned long long x0; } x1; } x0; struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> { void *x0; } x1; unsigned long long x2; float x3; } x0; })stringMapFromStringDictionary:(id)a0;
+ (struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; void *x2; })stringVectorFromStringArray:(id)a0;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)compileFile:(id)a0 withSubstitutions:(id)a1 includingPaths:(id)a2;
- (id)compileText:(id)a0 withSubstitutions:(id)a1 includingPaths:(id)a2;

@end
