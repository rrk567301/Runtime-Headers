@class NSString;

@interface CTPlmnInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *mcc;
@property (readonly, nonatomic) NSString *mnc;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMcc:(struct MCC { unsigned short x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x1; })a0 mnc:(struct MNC { unsigned short x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x1; })a1;
- (id)initWithMccStr:(id)a0 mncStr:(id)a1;

@end
