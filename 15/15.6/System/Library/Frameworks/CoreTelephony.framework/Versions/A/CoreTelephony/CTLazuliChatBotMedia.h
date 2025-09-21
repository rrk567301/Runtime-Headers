@class CTLazuliChatBotMediaUrl, CTLazuliChatBotMediaFingerprint;

@interface CTLazuliChatBotMedia : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) CTLazuliChatBotMediaUrl *mediaUrl;
@property (retain, nonatomic) CTLazuliChatBotMediaFingerprint *fingerprint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (char)isEqualToCTLazuliChatBotMedia:(id)a0;

@end
