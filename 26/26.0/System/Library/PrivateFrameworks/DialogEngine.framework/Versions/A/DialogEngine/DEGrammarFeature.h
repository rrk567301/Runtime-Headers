@class NSString;

@interface DEGrammarFeature : NSObject

@property struct GrammarFeature { int mType; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } mName; struct set<std::string, std::less<std::string>, std::allocator<std::string>> { struct __tree<std::string, std::less<std::string>, std::allocator<std::string>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } mValues; BOOL mIsUniqueValues; } Obj;
@property (readonly) NSString *name;
@property (readonly) unsigned long long type;
@property (readonly) BOOL isUniqueValues;

+ (id)features:(id)a0;

- (id)values;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
