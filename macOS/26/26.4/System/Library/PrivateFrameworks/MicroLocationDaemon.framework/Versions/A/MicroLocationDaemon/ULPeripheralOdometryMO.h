@class ULLoiMO;

@interface ULPeripheralOdometryMO : NSManagedObject

@property (nonatomic) double timestamp;
@property (nonatomic) float deltaPositionX;
@property (nonatomic) float deltaPositionY;
@property (nonatomic) float deltaPositionZ;
@property (nonatomic) float attitudeQuaternionX;
@property (nonatomic) float attitudeQuaternionY;
@property (nonatomic) float attitudeQuaternionZ;
@property (nonatomic) float attitudeQuaternionW;
@property (nonatomic) unsigned int sensorID;
@property (retain, nonatomic) ULLoiMO *loi;

+ (id)fetchRequest;
+ (id)createFromDO:(const void *)a0 loiMO:(id)a1 inManagedObjectContext:(id)a2;

- (struct optional<ULPeripheralOdometryDO> { union { char x0; struct ULPeripheralOdometryDO { struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; unsigned int x8; } x1; } x0; BOOL x1; })convertToDO;

@end
