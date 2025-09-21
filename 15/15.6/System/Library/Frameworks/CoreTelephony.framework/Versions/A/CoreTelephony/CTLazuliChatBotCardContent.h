@class CTLazuliChatBotCardTitle, CTLazuliChatBotCardDescription, CTLazuliChatBotCardMedia, CTLazuliChatBotSuggestedChipList;

@interface CTLazuliChatBotCardContent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) CTLazuliChatBotCardMedia *media;
@property (retain, nonatomic) CTLazuliChatBotCardTitle *title;
@property (retain, nonatomic) CTLazuliChatBotCardDescription *cardDescription;
@property (retain, nonatomic) CTLazuliChatBotSuggestedChipList *chipList;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (char)isEqualToCTLazuliChatBotCardContent:(id)a0;

@end
