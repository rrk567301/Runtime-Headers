@class NSNumber, NSString;

@interface MTROptionalQRCodeInfo : NSObject <NSCopying> {
    struct OptionalQRCodeInfo { unsigned char tag; int type; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } ; } data; int int32; } _info;
}

@property (copy, nonatomic) NSNumber *infoType;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSNumber *tag;
@property (readonly, copy, nonatomic) NSNumber *integerValue;
@property (readonly, copy, nonatomic) NSString *stringValue;

- (void)setTag:(id)a0;
- (void)setType:(unsigned long long)a0;
- (void)setStringValue:(id)a0;
- (void)setIntegerValue:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id).cxx_construct;
- (id)initWithTag:(id)a0 int32Value:(int)a1;
- (id)initWithTag:(id)a0 stringValue:(id)a1;

@end
