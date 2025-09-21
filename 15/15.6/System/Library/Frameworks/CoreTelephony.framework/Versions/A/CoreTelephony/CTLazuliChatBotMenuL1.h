@class NSString, NSArray;

@interface CTLazuliChatBotMenuL1 : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *displayText;
@property (retain, nonatomic) NSArray *list;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToCTLazuliChatBotMenuL1:(id)a0;
- (id)initWithReflection:(const void *)a0;

@end
