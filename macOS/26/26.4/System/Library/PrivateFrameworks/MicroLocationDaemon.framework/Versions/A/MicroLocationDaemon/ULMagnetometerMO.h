@class ULScanningEventMO;

@interface ULMagnetometerMO : NSManagedObject

@property (nonatomic) double horizontalField;
@property (nonatomic) double verticalField;
@property (nonatomic) float biasEstimateVarianceX;
@property (nonatomic) float biasEstimateVarianceZ;
@property (nonatomic) float biasEstimateVarianceY;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) ULScanningEventMO *scanningEvent;

+ (id)fetchRequest;
+ (id)createFromDO:(const void *)a0 withScanningEventMO:(id)a1 inManagedObjectContext:(id)a2;

- (struct optional<ULMagnetometerDO> { union { char x0; struct ULMagnetometerDO { double x0; double x1; struct { float x0; float x1; float x2; } x2; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x3; } x1; } x0; BOOL x1; })convertToDO;

@end
