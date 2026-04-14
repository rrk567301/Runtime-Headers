@interface CADSPPropertyWireModel : NSObject <NSCopying, NSMutableCopying> {
    struct PropertyWireModel { struct PropertyEndpoint { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } boxName; struct PropertyAddress { unsigned int ID; unsigned int scope; unsigned int element; } boxPropertyAddress; } source; struct PropertyEndpoint { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } boxName; struct PropertyAddress { unsigned int ID; unsigned int scope; unsigned int element; } boxPropertyAddress; } destination; BOOL isCausal; } _this;
}

@property (readonly, nonatomic) unsigned int options;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)options;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct CADSPPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })boxPropertyAddressOfEndpoint:(unsigned int)a0;
- (id)copyBoxNameOfEndpoint:(unsigned int)a0;

@end
