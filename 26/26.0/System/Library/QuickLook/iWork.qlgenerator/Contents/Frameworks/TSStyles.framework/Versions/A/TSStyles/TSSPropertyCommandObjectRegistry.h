@interface TSSPropertyCommandObjectRegistry : NSObject {
    struct map<int, std::pair<Class, std::string>, std::less<int>, std::allocator<std::pair<const int, std::pair<Class, std::string>>>> { struct __tree<std::__value_type<int, std::pair<Class, std::string>>, std::__map_value_compare<int, std::__value_type<int, std::pair<Class, std::string>>, std::less<int>>, std::allocator<std::__value_type<int, std::pair<Class, std::string>>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _indexToClass;
    struct map<Class, int, std::less<Class>, std::allocator<std::pair<const Class, int>>> { struct __tree<std::__value_type<Class, int>, std::__map_value_compare<Class, std::__value_type<Class, int>, std::less<Class>>, std::allocator<std::__value_type<Class, int>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _classToIndex;
}

@property (class, readonly, nonatomic) TSSPropertyCommandObjectRegistry *sharedRegistry;

+ (void)setIntializationHandler:(id /* block */)a0;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const void *)nameForIndex:(int)a0;
- (Class)classForIndex:(int)a0;
- (int)indexForClass:(Class)a0;
- (void)registerClass:(Class)a0 withField:(id)a1;

@end
