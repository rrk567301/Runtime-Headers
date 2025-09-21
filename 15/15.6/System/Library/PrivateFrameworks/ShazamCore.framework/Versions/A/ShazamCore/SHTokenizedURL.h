@class NSURLComponents, NSMutableDictionary;

@interface SHTokenizedURL : NSObject <NSCopying>

@property (readonly, copy) NSURLComponents *originalComponents;
@property (retain) NSMutableDictionary *tokenDictionary;

+ (id)replaceToken:(long long)a0 withValue:(id)a1 urlString:(id)a2;
+ (id)tokenForTokenType:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)initWithURLComponents:(id)a0;
- (id)originalURLString;
- (char)containsToken:(long long)a0;
- (id)URLRepresentation;
- (char)containsTokens;
- (id)initWithBaseURL:(id)a0 URLPath:(id)a1;
- (id)initWithHost:(id)a0 URLPath:(id)a1;
- (char)path:(id)a0 containsToken:(long long)a1;
- (id)tokenizedURLString;
- (char)updateToken:(long long)a0 withValue:(id)a1;

@end
