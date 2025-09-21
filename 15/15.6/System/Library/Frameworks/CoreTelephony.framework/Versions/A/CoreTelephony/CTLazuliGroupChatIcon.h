@class NSString, NSData;

@interface CTLazuliGroupChatIcon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToCTLazuliGroupChatIcon:(id)a0;
- (id)initWithReflection:(const void *)a0;

@end
