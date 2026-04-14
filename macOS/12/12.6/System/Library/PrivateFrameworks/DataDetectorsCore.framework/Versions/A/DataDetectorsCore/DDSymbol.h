@class DDNonTerminal, NSString;

@interface DDSymbol : NSObject <NSSecureCoding> {
    int _type;
    union __DDSymbolUnion { DDNonTerminal *nonTerminal; long long tokenID; } u;
    NSString *_displayName;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)displayName;
- (void)setDisplayName:(id)a0;
- (id)initWithTokenId:(long long)a0;
- (id)initWithNonTerminal:(id)a0;
- (int)symbolType;

@end
