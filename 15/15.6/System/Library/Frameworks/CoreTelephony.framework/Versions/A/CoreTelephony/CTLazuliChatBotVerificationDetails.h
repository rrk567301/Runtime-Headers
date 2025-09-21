@class NSString;

@interface CTLazuliChatBotVerificationDetails : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char verified;
@property (retain, nonatomic) NSString *verifiedBy;
@property (retain, nonatomic) NSString *expires;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (char)isEqualToCTLazuliChatBotVerificationDetails:(id)a0;

@end
