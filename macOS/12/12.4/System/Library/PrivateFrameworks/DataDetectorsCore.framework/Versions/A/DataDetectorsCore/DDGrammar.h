@class NSArray, NSMutableDictionary, DDNonTerminal, NSMutableSet, NSMutableArray;

@interface DDGrammar : NSObject <NSSecureCoding> {
    NSMutableArray *_nonTerminals;
    NSMutableSet *_allNames;
    int _tokenGen;
    DDNonTerminal *_start;
    NSArray *_allProductionsCache;
    long long _nextNonTerminalId;
    struct __CFDictionary { } *_terminalById;
    NSMutableDictionary *_nonTerminalByVariable;
    struct __DDProtoLexemeCollection { } *_plCollection;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)start;
- (id)freshNameWithBase:(id)a0;
- (id)buildNonTerminalSymbolWithName:(id)a0;
- (id)terminalSymbolWithTokenId:(long long)a0 name:(id)a1;
- (id)buildNonTerminalSymbol;
- (id)allProductions;
- (long long)nextNonTerminalIdentifier;
- (id)terminalSymbolWithLookupTokenId:(long long)a0 name:(id)a1;
- (void)feedWithTopLevelExpressions:(id)a0 plCollection:(struct __DDProtoLexemeCollection { } *)a1 manager:(id)a2;
- (id)grammarAsString;
- (id)locationString;
- (struct __DDProtoLexemeCollection { } *)plCollection;
- (id)nonTerminalSymbolForVariable:(id)a0;
- (void)setNonTerminalSymbol:(id)a0 forVariable:(id)a1;

@end
