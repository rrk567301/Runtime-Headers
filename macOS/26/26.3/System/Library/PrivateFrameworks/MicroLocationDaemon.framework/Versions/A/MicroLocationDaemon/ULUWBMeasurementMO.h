@class NSString, ULScanningEventMO;

@interface ULUWBMeasurementMO : NSManagedObject

@property (nonatomic) short deviceModel;
@property (nonatomic) float range;
@property (retain, nonatomic) NSString *sourceIdsUUID;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) ULScanningEventMO *scanningEvent;

+ (id)fetchRequest;
+ (id)createFromDO:(const void *)a0 withScanningEventMO:(id)a1 inManagedObjectContext:(id)a2;

- (struct optional<ULUWBMeasurementDO> { union { char x0; struct ULUWBMeasurementDO { struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x0; float x1; struct uuid { unsigned char x0[16]; } x2; short x3; } x1; } x0; BOOL x1; })convertToDO;

@end
