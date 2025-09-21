@interface TSKCOIdPlacementBaseOperation : TSKCOAbstractOperation

@property (readonly, nonatomic) int fromIndex;
@property (readonly, nonatomic) int toIndex;
@property (readonly, nonatomic) int placementType;
@property (readonly, nonatomic) char isDominating;

+ (id)stringForPlacementType:(int)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)toString;
- (void)saveToArchiver:(id)a0 message:(void *)a1;
- (id)initWithAddress:(const void *)a0 fromIndex:(int)a1 toIndex:(int)a2;
- (id)initWithAddress:(const void *)a0 fromIndex:(int)a1 toIndex:(int)a2 dominating:(char)a3 noop:(char)a4;
- (id)initWithUnarchiver:(id)a0 message:(const void *)a1;
- (id)operationWithNewNoop:(char)a0;

@end
