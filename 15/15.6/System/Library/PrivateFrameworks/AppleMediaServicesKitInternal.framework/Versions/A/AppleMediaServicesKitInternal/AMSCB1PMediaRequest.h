@class AMSCB1PBridge;

@interface AMSCB1PMediaRequest : NSObject <NSCopying> {
    struct MediaRequest { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } version; unsigned short type; struct optional<std::string> { union { char __null_state_; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } __val_; } ; BOOL __engaged_; } platform; struct shared_ptr<AMSCore::IMediaAccount> { struct IMediaAccount *__ptr_; struct __shared_weak_count *__cntrl_; } account; struct OrderedMap<std::string, std::string> { struct __list_node_base<std::pair<std::string, std::string>, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<std::pair<std::string, std::string>, void *>>> { unsigned long long __value_; } __size_alloc_; } additionalQueryParams; } _mediaRequest;
    AMSCB1PBridge *_bridge;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
