@interface _VZVNCSecurityConfiguration : NSObject <NSCopying> {
    struct variant<Vnc::SecurityConfiguration::NoSecurity, Vnc::SecurityConfiguration::VncAuthentication> { struct __impl<Vnc::SecurityConfiguration::NoSecurity, Vnc::SecurityConfiguration::VncAuthentication> { union __union<std::__variant_detail::_Trait::_Available, 0UL, Vnc::SecurityConfiguration::NoSecurity, Vnc::SecurityConfiguration::VncAuthentication> { char __dummy; struct __alt<0UL, Vnc::SecurityConfiguration::NoSecurity> { struct NoSecurity { } __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 1UL, Vnc::SecurityConfiguration::VncAuthentication> { char __dummy; struct __alt<1UL, Vnc::SecurityConfiguration::VncAuthentication> { struct VncAuthentication { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } password; } __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } __tail; } __tail; } __data; unsigned int __index; } __impl; } _configuration_type;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
