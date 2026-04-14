@class NSString, NSArray, NSLocale;

@interface CKVTokenChain : NSObject <KVTokenChain, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *normalizedString;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSArray *tokens;

+ (id)tokenChainBuilderForString:(id)a0 locale:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)enumerateTokensUsingBlock:(id /* block */)a0;
- (id)cleanText;
- (id)initWithString:(id)a0 locale:(id)a1 tokens:(id)a2;
- (BOOL)isEqualToTokenChain:(id)a0;

@end
