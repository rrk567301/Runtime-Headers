@class NSArray, NSEnumerator;

@interface SNNMILFunction : NSObject {
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } _name;
    struct shared_ptr<MIL::IRFunction> { struct IRFunction *__ptr_; struct __shared_weak_count *__cntrl_; } _function;
}

@property (readonly, nonatomic) NSArray *inputNames;
@property (readonly, nonatomic) NSArray *outputNames;
@property (readonly, nonatomic) long long operationCount;
@property (readonly, nonatomic) NSEnumerator *operationEnumerator;

- (id)init;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char x0 : 1; unsigned char x1 : 7; } x0; char x1[0]; char x2[23]; } x0; struct __long { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; unsigned long long x1; char *x2; } x1; } x0; } x0; })name;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)operationAtIndex:(long long)a0;
- (id)initWithFunction:(struct shared_ptr<MIL::IRFunction> { struct IRFunction *x0; struct __shared_weak_count *x1; })a0 name:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char x0 : 1; unsigned char x1 : 7; } x0; char x1[0]; char x2[23]; } x0; struct __long { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; unsigned long long x1; char *x2; } x1; } x0; } x0; })a1;
- (id)inputWithName:(id)a0;
- (struct shared_ptr<MIL::IRFunction> { struct IRFunction *x0; struct __shared_weak_count *x1; })milFunction;

@end
