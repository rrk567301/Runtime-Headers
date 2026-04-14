@class NSString, NSMutableDictionary;

@interface SHTokenizedURL : NSObject <NSCopying>

@property (copy) NSString *host;
@property (readonly, copy) NSString *tokenURLPath;
@property (copy) NSString *originalURLPath;
@property (retain) NSMutableDictionary *tokenDictionary;

+ (id)replaceToken:(long long)a0 withValue:(id)a1 urlString:(id)a2;
+ (id)tokenForTokenType:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (BOOL)containsToken:(long long)a0;
- (id)URLRepresentation;
- (BOOL)containsTokens;
- (id)initWithHost:(id)a0 URLPath:(id)a1;
- (BOOL)updateToken:(long long)a0 withValue:(id)a1;

@end
