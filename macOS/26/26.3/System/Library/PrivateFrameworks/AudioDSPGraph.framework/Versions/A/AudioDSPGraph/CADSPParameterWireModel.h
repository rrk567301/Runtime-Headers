@interface CADSPParameterWireModel : NSObject <NSCopying, NSMutableCopying> {
    struct ParameterWireModel { struct ParameterEndpoint { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } ; } boxName; struct ParameterAddress { unsigned int ID; unsigned int scope; unsigned int element; } boxParameterAddress; } source; struct ParameterEndpoint { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } ; } boxName; struct ParameterAddress { unsigned int ID; unsigned int scope; unsigned int element; } boxParameterAddress; } destination; BOOL isCausal; } _this;
}

@property (readonly, nonatomic) unsigned int options;

- (unsigned int)options;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (struct CADSPParameterAddress { unsigned int x0; unsigned int x1; unsigned int x2; })boxParameterAddressOfEndpoint:(unsigned int)a0;
- (id)copyBoxNameOfEndpoint:(unsigned int)a0;

@end
