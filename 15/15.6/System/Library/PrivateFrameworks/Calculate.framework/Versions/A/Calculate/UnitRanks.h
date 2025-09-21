@class UnitsInfo, NSMutableSet, NSMutableArray;

@interface UnitRanks : NSObject

@property (retain, nonatomic) NSMutableSet *units;
@property (retain, nonatomic) NSMutableArray *ranks;
@property (readonly) char containsFrom;
@property (readonly) char containsTo;
@property (readonly) char containsUnit;
@property (readonly) char containsCurrency;
@property (readonly) char isAmbiguous;
@property (weak, nonatomic) UnitsInfo *unitsInfo;
@property (nonatomic) int tokenType;
@property (nonatomic) char isLaTeX;

+ (id)unitRanksWithUnitsInfo:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)sort;
- (void)addUnitRank:(id)a0;
- (id)initWithUnitsInfo:(id)a0;

@end
