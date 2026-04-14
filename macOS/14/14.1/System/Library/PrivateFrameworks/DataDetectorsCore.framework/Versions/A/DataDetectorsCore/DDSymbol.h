@class DDNonTerminal, NSString;

@interface DDSymbol : NSObject {
    int _type;
    union __DDSymbolUnion { DDNonTerminal *nonTerminal; long long tokenID; } u;
    NSString *_displayName;
}

- (void)dealloc;
- (id)description;
- (void)setDisplayName:(id)a0;
- (id)displayName;
- (id)initWithNonTerminal:(id)a0;
- (id)initWithTokenId:(long long)a0;
- (int)symbolType;

@end
