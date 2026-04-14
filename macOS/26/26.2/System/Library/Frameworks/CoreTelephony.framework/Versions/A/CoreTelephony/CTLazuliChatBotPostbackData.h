@class NSString;

@interface CTLazuliChatBotPostbackData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *data;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliChatBotPostbackData:(id)a0;

@end
