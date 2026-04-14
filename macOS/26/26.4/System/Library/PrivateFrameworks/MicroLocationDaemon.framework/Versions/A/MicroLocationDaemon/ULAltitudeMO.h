@class NSUUID, ULLoiMO;

@interface ULAltitudeMO : NSManagedObject

@property (nonatomic) float altitudeMeters;
@property (nonatomic) float accuracyMeters;
@property (nonatomic) float precisionMeters;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSUUID *altitudeSessionUUID;
@property (retain, nonatomic) ULLoiMO *loi;

+ (id)fetchRequest;
+ (id)createFromDO:(const void *)a0 loiMO:(id)a1 inManagedObjectContext:(id)a2;

- (struct optional<ULAltitudeDO> { union { char x0; struct ULAltitudeDO { float x0; float x1; float x2; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x3; id x4; } x1; } x0; BOOL x1; })convertToDO;

@end
