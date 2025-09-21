@interface AMSCB1PMetricsIdentifierKey : NSObject {
    struct optional<AMSCore::MetricsIdentifierKey> { union { char __null_state_; struct MetricsIdentifierKey { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } mBagDomain; struct duration<long long, std::ratio<1>> { long long __rep_; } mResetInterval; unsigned long long mAccountId; struct optional<std::string> { union { char __null_state_; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } __val_; } ; BOOL __engaged_; } mClientDomain; } __val_; } ; BOOL __engaged_; } _key;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
