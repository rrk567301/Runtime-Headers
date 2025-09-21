@class NSString, NSArray, NSLocale;

@interface CKVTokenChain : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *normalizedString;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSArray *tokens;

+ (id)tokenChainBuilderForString:(id)a0 locale:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0 locale:(id)a1 tokens:(id)a2;
- (char)isEqualToTokenChain:(id)a0;

@end
