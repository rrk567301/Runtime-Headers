@class AMSCB1PBridge;

@interface AMSCB1PMediaRequest : NSObject <NSCopying> {
    struct MediaRequest { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } version; unsigned short type; struct optional<std::string> { union { char __null_state_; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } __val_; } ; BOOL __engaged_; } platform; struct shared_ptr<AMSCore::IMediaAccount> { struct IMediaAccount *__ptr_; struct __shared_weak_count *__cntrl_; } account; struct OrderedMap<std::string, std::string> { struct __list_node_base<std::pair<std::string, std::string>, void *> { void *__prev_; void *__next_; } __end_; unsigned long long __size_; } additionalQueryParams; } _mediaRequest;
    AMSCB1PBridge *_bridge;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
