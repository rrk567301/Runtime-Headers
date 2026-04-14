@class NSString, NSMutableDictionary;

@interface SHTokenizedURL : NSObject <NSCopying>

@property (copy) NSString *host;
@property (readonly, copy) NSString *tokenURLPath;
@property (copy) NSString *originalURLPath;
@property (retain) NSMutableDictionary *tokenDictionary;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)initWithHost:(id)a0 URLPath:(id)a1;
- (BOOL)updateToken:(long long)a0 withValue:(id)a1;
- (id)tokenForTokenType:(long long)a0;
- (id)URLRepresentation;
- (BOOL)containsTokens;

@end
