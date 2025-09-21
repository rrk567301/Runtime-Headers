@class NSString, NSArray, UnitInfo;

@interface UnitTypeInfo : NSObject

@property (nonatomic) int unitType;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) char isDecomposable;
@property (nonatomic) struct { unsigned long long w[2]; } decompositionCoefficient;
@property (nonatomic) struct UnitCounts { struct UnitCount { int unitID; int exponent; } types[16]; } decomposition;
@property (retain, nonatomic) NSArray *units;
@property (weak, nonatomic) UnitInfo *baseUnit;
@property (nonatomic) char isTemperature;
@property (nonatomic) char isCurrency;
@property (nonatomic) char isVolume;

- (void).cxx_destruct;

@end
