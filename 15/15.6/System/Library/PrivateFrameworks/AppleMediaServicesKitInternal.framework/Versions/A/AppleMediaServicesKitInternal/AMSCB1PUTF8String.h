@interface AMSCB1PUTF8String : NSObject <NSCopying> {
    struct variant<std::string, std::pair<std::reference_wrapper<const std::string>, id>> { struct __impl<std::string, std::pair<std::reference_wrapper<const std::string>, id>> { union __union<std::__variant_detail::_Trait::_Available, 0UL, std::string, std::pair<std::reference_wrapper<const std::string>, id>> { char __dummy; struct __alt<0UL, std::string> { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 1UL, std::pair<std::reference_wrapper<const std::string>, id>> { char __dummy; struct __alt<1UL, std::pair<std::reference_wrapper<const std::string>, id>> { struct pair<std::reference_wrapper<const std::string>, id> { struct reference_wrapper<const std::string> { void *__f_; } first; id second; } __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } __tail; } __tail; } __data; unsigned int __index; } __impl_; } _variant;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithCharacters:(const char *)a0;

@end
