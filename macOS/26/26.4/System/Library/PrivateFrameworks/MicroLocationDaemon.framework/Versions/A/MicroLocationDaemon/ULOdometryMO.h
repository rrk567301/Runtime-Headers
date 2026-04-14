@class NSNumber, NSUUID, ULLoiMO;

@interface ULOdometryMO : NSManagedObject

@property (nonatomic) short deltaPositionX;
@property (nonatomic) short deltaPositionY;
@property (nonatomic) short deltaPositionZ;
@property (retain, nonatomic) NSNumber *alignmentAngleRad;
@property (retain, nonatomic) NSNumber *alignmentAngleErrorEstimateRad;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSUUID *trajectoryUUID;
@property (retain, nonatomic) ULLoiMO *loi;
@property (nonatomic) short odometrySourceType;

+ (id)fetchRequest;
+ (id)createFromDO:(const void *)a0 loiMO:(id)a1 inManagedObjectContext:(id)a2;

- (struct optional<ULOdometryDO> { union { char x0; struct ULOdometryDO { float x0; float x1; float x2; struct optional<float> { union { char x0; float x1; } x0; BOOL x1; } x3; struct optional<float> { union { char x0; float x1; } x0; BOOL x1; } x4; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x5; id x6; long long x7; } x1; } x0; BOOL x1; })convertToDO;

@end
