@class NSString;

@interface CADSPPortModel : NSObject <NSCopying, NSMutableCopying> {
    struct PortModel { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } ; } name; unsigned int direction; } _this;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int direction;

- (unsigned int)direction;
- (id)name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;

@end
