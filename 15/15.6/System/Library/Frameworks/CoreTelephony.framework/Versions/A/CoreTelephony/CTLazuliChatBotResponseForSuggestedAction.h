@class NSString, CTLazuliChatBotPostbackData, CTLazuliMessageID;

@interface CTLazuliChatBotResponseForSuggestedAction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *displayText;
@property (retain, nonatomic) CTLazuliChatBotPostbackData *postBackData;
@property (retain, nonatomic) CTLazuliMessageID *inReplyToID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (char)isEqualToCTLazuliChatBotResponseForSuggestedAction:(id)a0;

@end
