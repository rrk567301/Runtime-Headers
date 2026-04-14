@interface CTLazuliMessageChatBotFontStyle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL bold;
@property (nonatomic) BOOL italics;
@property (nonatomic) BOOL underline;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithReflection:(const struct MessageChatBotFontStyle { BOOL x0; BOOL x1; BOOL x2; } *)a0;
- (BOOL)isEqualToCTLazuliMessageChatBotFontStyle:(id)a0;

@end
