@class NSNumber, NSString;

@interface MTROptionalQRCodeInfo : NSObject <NSCopying> {
    struct OptionalQRCodeInfo { unsigned char tag; int type; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } data; int int32; } _info;
}

@property (copy, nonatomic) NSNumber *infoType;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSNumber *tag;
@property (readonly, copy, nonatomic) NSNumber *integerValue;
@property (readonly, copy, nonatomic) NSString *stringValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setType:(unsigned long long)a0;
- (void)setTag:(id)a0;
- (id).cxx_construct;
- (void)setStringValue:(id)a0;
- (void)setIntegerValue:(id)a0;
- (id)initWithTag:(id)a0 int32Value:(int)a1;
- (id)initWithTag:(id)a0 stringValue:(id)a1;

@end
