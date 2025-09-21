@interface CTBBootstrappingInfoWrapper : NSObject

@property (readonly, nonatomic) struct optional<ctb::BootstrappingInfo> { union { char __null_state_; struct BootstrappingInfo { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } fBootstrappingTransactionID; long long fLifetime; } __val_; } ; BOOL __engaged_; } wrapped;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithWrapped:(struct optional<ctb::BootstrappingInfo> { union { char x0; struct BootstrappingInfo { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char x0 : 1; unsigned char x1 : 7; } x0; char x1[0]; char x2[23]; } x0; struct __long { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; unsigned long long x1; char *x2; } x1; } x0; } x0; } x0; long long x1; } x1; } x0; BOOL x1; })a0;

@end
