@class NSString;

@interface SKAttribute : NSObject <NSSecureCoding> {
    long long _type;
    NSString *_name;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } _nameString;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long type;

+ (id)attributeWithName:(id)a0 type:(long long)a1;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithName:(id)a0 type:(long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqualToAttribute:(id)a0;
- (const void *)getNameString;

@end
