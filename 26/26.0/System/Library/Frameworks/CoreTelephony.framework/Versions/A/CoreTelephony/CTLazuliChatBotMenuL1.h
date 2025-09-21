@class NSString, NSArray;

@interface CTLazuliChatBotMenuL1 : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *displayText;
@property (retain, nonatomic) NSArray *list;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToCTLazuliChatBotMenuL1:(id)a0;
- (id)initWithReflection:(const void *)a0;

@end
