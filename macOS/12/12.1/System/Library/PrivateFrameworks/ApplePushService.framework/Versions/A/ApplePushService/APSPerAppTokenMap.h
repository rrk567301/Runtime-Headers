@class NSMutableDictionary;

@interface APSPerAppTokenMap : NSObject {
    NSMutableDictionary *_perAppTokenMap;
    long long _missingTokens;
    BOOL _enumerating;
}

- (id)description;
- (id)debugDescription;
- (id)init;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)tokenForTopic:(id)a0 identifier:(id)a1;
- (void)setToken:(id)a0 forTopic:(id)a1 identifier:(id)a2;
- (void)addIdentifier:(id)a0 forTopic:(id)a1;
- (void)removeIdentifier:(id)a0 forTopic:(id)a1;
- (void)enumerateTokensUsingBlock:(id /* block */)a0;
- (id)tokensForTopic:(id)a0;
- (BOOL)hasMissingTokens;
- (void)removeAllTokens;
- (BOOL)flagForTopic:(id)a0 identifier:(id)a1;
- (void)setFlag:(BOOL)a0 forTopic:(id)a1 identifier:(id)a2;
- (id)allPerAppTokens;
- (id)topics;
- (id)identifiersForTopic:(id)a0;
- (void)enumerateMissingTokensUsingBlock:(id /* block */)a0;

@end
