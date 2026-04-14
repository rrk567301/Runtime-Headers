@class NSSet, NSString, NSMutableSet, NSMutableDictionary, NSCharacterSet, NSMutableArray;

@interface CHGrammar : NSObject {
    NSMutableArray *_terminalProductions;
    NSMutableArray *_nonTerminalProductions;
    NSMutableDictionary *_productionsByKey;
    NSMutableSet *_nonTerminals;
}

@property (readonly, nonatomic) NSMutableSet *terminals;
@property (readonly, nonatomic) NSSet *nonTerminals;
@property (readonly, nonatomic) NSCharacterSet *characterSet;
@property (readonly, nonatomic) NSString *file;

- (void).cxx_destruct;
- (id)initWithFile:(id)a0;
- (id)description;
- (id)getProductionRuleByKey:(id)a0;
- (id)nonTerminalProductions;
- (id)terminalProductions;
- (id)terminalst;

@end
