@interface AMSCB1PAccountIdentity : NSObject {
    struct optional<AMSCore::AccountIdentity> { union { char __null_state_; struct AccountIdentity { struct optional<std::string> { union { char __null_state_; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } __val_; } ; BOOL __engaged_; } mAltDSID; unsigned long long mDSID; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } mUsername; } __val_; } ; BOOL __engaged_; } _identity;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
