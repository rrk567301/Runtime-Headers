@class DDLocation, NSArray, DDNonTerminal;

@interface DDProduction : NSObject {
    NSArray *_items;
    DDNonTerminal *_nonTerminal;
    DDLocation *_location;
    long long *_graphOfWeakNT;
    long long _numberOfDottedProductions;
    struct __DDDotedProduction { struct __DDProduction *x0; unsigned char x1; unsigned int x2; unsigned short x3; } *_dottedProductions;
}

@property long long index;
@property (retain) DDLocation *location;

- (void)dealloc;
- (id)description;
- (id)locationDescription;
- (id)symbols;
- (BOOL)checkDottedProductionIndex:(long long)a0;
- (id)descriptionWithMarkerPos:(int)a0;
- (struct __DDDotedProduction { struct __DDProduction *x0; unsigned char x1; unsigned int x2; unsigned short x3; } *)dottedProductions;
- (id)initWithSymbols:(id)a0 nonTerminal:(id)a1;
- (id)locationFilename;
- (struct __DDExpressionPosition { int x0; int x1; int x2; int x3; })locationPosition;
- (id)nonTerminal;
- (long long)numberOfDottedProduction;
- (long long)numberOfWeakNTBeforeIndex:(long long)a0;
- (void)recalculateWeakNTGraphAndDottedProdNumber;
- (void)setDottedProductions:(struct __DDDotedProduction { struct __DDProduction *x0; unsigned char x1; unsigned int x2; unsigned short x3; } *)a0;
- (void)setSymbols:(id)a0;

@end
