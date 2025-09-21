@class NSString;

@interface CTLazuliSuggestedActionDialEnrichedCall : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *fallbackUrl;
@property (retain, nonatomic) NSString *subject;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (char)isEqualToCTLazuliSuggestedActionDialEnrichedCall:(id)a0;

@end
