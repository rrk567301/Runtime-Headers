@interface AMSCB1PMetricsIdentifierKey : NSObject {
    struct optional<AMSCore::MetricsIdentifierKey> { union { char __null_state_; struct MetricsIdentifierKey { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } mBagDomain; struct duration<long long, std::ratio<1>> { long long __rep_; } mResetInterval; unsigned long long mAccountId; struct optional<std::string> { union { char __null_state_; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } __val_; } ; BOOL __engaged_; } mClientDomain; } __val_; } ; BOOL __engaged_; } _key;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
