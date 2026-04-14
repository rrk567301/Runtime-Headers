@class NSURL;

@interface CTLazuliMessageChatBotCardStyle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *uri;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliMessageChatBotCardStyle:(id)a0;

@end
