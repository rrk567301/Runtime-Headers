@class CTLazuliChatBotSuggestedChipList, CTLazuliChatBotCard;

@interface CTLazuliMessageChatBotCard : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTLazuliChatBotCard *card;
@property (retain, nonatomic) CTLazuliChatBotSuggestedChipList *chipList;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliMessageChatBotCard:(id)a0;

@end
