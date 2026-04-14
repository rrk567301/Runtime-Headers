@class DDLocation, NSArray, DDNonTerminal;

@interface DDProduction : NSObject <NSSecureCoding> {
    NSArray *_items;
    DDNonTerminal *_nonTerminal;
    DDLocation *_location;
    long long *_graphOfWeakNT;
    long long _numberOfDottedProductions;
    struct __DDDotedProduction { struct __DDProduction *x0; unsigned char x1; unsigned int x2; unsigned short x3; } *_dottedProductions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property long long index;
@property (retain) DDLocation *location;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)locationFilename;
- (struct __DDExpressionPosition { int x0; int x1; int x2; int x3; })locationPosition;
- (id)locationDescription;
- (id)initWithSymbols:(id)a0 nonTerminal:(id)a1;
- (id)descriptionWithMarkerPos:(int)a0;
- (void)setSymbols:(id)a0;
- (id)symbols;
- (id)nonTerminal;
- (void)recalculateWeakNTGraphAndDottedProdNumber;
- (long long)numberOfWeakNTBeforeIndex:(long long)a0;
- (long long)numberOfDottedProduction;
- (void)setDottedProductions:(struct __DDDotedProduction { struct __DDProduction *x0; unsigned char x1; unsigned int x2; unsigned short x3; } *)a0;
- (struct __DDDotedProduction { struct __DDProduction *x0; unsigned char x1; unsigned int x2; unsigned short x3; } *)dottedProductions;
- (BOOL)checkDottedProductionIndex:(long long)a0;

@end
