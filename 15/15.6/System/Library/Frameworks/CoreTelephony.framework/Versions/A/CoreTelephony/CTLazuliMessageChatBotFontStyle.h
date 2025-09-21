@interface CTLazuliMessageChatBotFontStyle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char bold;
@property (nonatomic) char italics;
@property (nonatomic) char underline;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const struct MessageChatBotFontStyle { BOOL x0; BOOL x1; BOOL x2; } *)a0;
- (char)isEqualToCTLazuliMessageChatBotFontStyle:(id)a0;

@end
