@class NSString, DDGrammar, DDBinderInfo, NSMutableArray;

@interface DDNonTerminal : NSObject <NSSecureCoding> {
    NSMutableArray *_productions;
    DDBinderInfo *_info;
    long long _nonTerminalID;
    DDGrammar *_grammar;
    struct __DDIndexSet { } *_followSet;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *name;
@property BOOL matchesEpsilon;
@property BOOL skippable;
@property BOOL forceNonSkippable;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)binderInfo;
- (void)setBinderInfo:(id)a0;
- (id)initWithName:(id)a0 inGrammar:(id)a1;
- (void)addProductionWithSymbols:(id)a0 location:(id)a1;
- (id)asSymbols;
- (void)appendDescription:(id)a0 withIndexRef:(long long *)a1;
- (void)appendLocationDescription:(id)a0 withIndexRef:(long long *)a1;
- (id)productions;
- (void)_reallyAddProductionWithSymbols:(id)a0 location:(id)a1;
- (void)setProductions:(id)a0;

@end
