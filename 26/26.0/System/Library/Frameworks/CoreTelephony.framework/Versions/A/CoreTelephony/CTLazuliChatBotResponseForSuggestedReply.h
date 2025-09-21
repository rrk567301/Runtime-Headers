@class NSString, CTLazuliChatBotPostbackData, CTLazuliMessageID;

@interface CTLazuliChatBotResponseForSuggestedReply : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *displayText;
@property (retain, nonatomic) CTLazuliChatBotPostbackData *postBackData;
@property (retain, nonatomic) CTLazuliMessageID *inReplyToID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliChatBotResponseForSuggestedReply:(id)a0;

@end
