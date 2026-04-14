@class _HKCFGNodeCache, NSScanner;

@interface _HKCFGParseContext : NSObject

@property (readonly, nonatomic) NSScanner *scanner;
@property (readonly, nonatomic) unsigned long long lengthAllowance;
@property (readonly, nonatomic) unsigned long long recursiveDepth;
@property (readonly, nonatomic) _HKCFGNodeCache *cache;

- (void).cxx_destruct;
- (id)initWithScanner:(id)a0 lengthAllowance:(unsigned long long)a1;
- (void)incrementRecursiveDepth;
- (void)decrementRecursiveDepth;
- (void)decreaseLengthAllowance:(unsigned long long)a0;
- (void)increaseLengthAllowance:(unsigned long long)a0;

@end
