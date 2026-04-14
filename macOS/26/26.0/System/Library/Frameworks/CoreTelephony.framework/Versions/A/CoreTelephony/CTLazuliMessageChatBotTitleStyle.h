@class CTLazuliMessageChatBotFontStyle;

@interface CTLazuliMessageChatBotTitleStyle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTLazuliMessageChatBotFontStyle *style;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithReflection:(const struct MessageChatBotTitleStyle { struct MessageChatBotFontStyle { BOOL x0; BOOL x1; BOOL x2; } x0; } *)a0;
- (BOOL)isEqualToCTLazuliMessageChatBotTitleStyle:(id)a0;

@end
