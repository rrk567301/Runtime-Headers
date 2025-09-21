@class NSURL;

@interface SEMSkitWrapper : NSObject {
    NSURL *_skitDirectoryURL;
    struct path { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } __pn_; } _skitDirectoryPath;
    struct path { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } __pn_; } _nameTriePath;
    struct path { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } __pn_; } _aliasTriePath;
}

@property (readonly, nonatomic) struct shared_ptr<semskitbridge::Searcher> { struct Searcher *__ptr_; struct __shared_weak_count *__cntrl_; } searcher;

- (void)teardown;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)readInfo;
- (void)boostrap;
- (id)initWithSkitDirectoryURL:(id)a0;

@end
