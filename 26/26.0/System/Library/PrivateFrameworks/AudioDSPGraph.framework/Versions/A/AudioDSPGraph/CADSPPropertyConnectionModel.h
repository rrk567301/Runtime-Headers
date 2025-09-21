@class NSString;

@interface CADSPPropertyConnectionModel : NSObject <NSCopying, NSMutableCopying> {
    struct PropertyConnectionModel { unsigned int graphPropertyID; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } boxName; struct PropertyAddress { unsigned int ID; unsigned int scope; unsigned int element; } boxPropertyAddress; } _this;
}

@property (readonly, nonatomic) unsigned int graphPropertyID;
@property (readonly, copy, nonatomic) NSString *boxName;
@property (readonly, nonatomic) struct CADSPPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } boxPropertyAddress;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)boxName;
- (unsigned int)graphPropertyID;
- (struct CADSPPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })boxPropertyAddress;

@end
