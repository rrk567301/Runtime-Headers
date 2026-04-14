@interface CHTransliterateConfusableCharactersArabicStep : CHPostprocessingStepModifyingOriginalTokens {
    struct map<std::string, std::pair<std::string, double>, std::less<std::string>, std::allocator<std::pair<const std::string, std::pair<std::string, double>>>> { struct __tree<std::__value_type<std::string, std::pair<std::string, double>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::pair<std::string, double>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::pair<std::string, double>>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _transliterationMapArabicLetters;
    struct map<std::string, std::pair<std::string, double>, std::less<std::string>, std::allocator<std::pair<const std::string, std::pair<std::string, double>>>> { struct __tree<std::__value_type<std::string, std::pair<std::string, double>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::pair<std::string, double>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::pair<std::string, double>>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _transliterationMapArabicNumbers;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)process:(id)a0 options:(id)a1;

@end
