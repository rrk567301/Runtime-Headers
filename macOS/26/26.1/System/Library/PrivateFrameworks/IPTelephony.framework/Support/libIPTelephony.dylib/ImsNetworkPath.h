@class NWPathEvaluator;

@interface ImsNetworkPath : NSObject {
    NWPathEvaluator *_pathEvaluator;
    struct weak_ptr<ImsNetworkPathDelegate> { struct ImsNetworkPathDelegate *__ptr_; struct __shared_weak_count *__cntrl_; } _delegate;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } _ifaceName;
    BOOL _observingPath;
}

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (void)evaluateInterface;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; })ifaceName;
- (id)initWithInterface:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; })a0 delegate:(struct weak_ptr<ImsNetworkPathDelegate> { struct ImsNetworkPathDelegate *x0; struct __shared_weak_count *x1; })a1;

@end
