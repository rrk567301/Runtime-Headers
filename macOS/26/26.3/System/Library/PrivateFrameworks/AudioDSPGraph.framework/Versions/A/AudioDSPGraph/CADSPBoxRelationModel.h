@interface CADSPBoxRelationModel : NSObject <NSCopying, NSMutableCopying> {
    struct BoxRelationModel { struct BoxAlias { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } ; } name; } source; struct BoxAlias { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } ; } name; } destination; int type; } _this;
}

@property (readonly, nonatomic) unsigned int type;

- (unsigned int)type;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (id)copyBoxNameOfEndpoint:(unsigned int)a0;

@end
