@class NSString, NSUUID, ULLoiMO;

@interface ULOdometryMO : NSManagedObject

@property (retain, nonatomic) NSString *deviceIdentifier;
@property (nonatomic) short deltaPositionX;
@property (nonatomic) short deltaPositionY;
@property (nonatomic) short deltaPositionZ;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSUUID *trajectoryUUID;
@property (retain, nonatomic) ULLoiMO *loi;
@property (nonatomic) short odometrySourceType;

+ (id)fetchRequest;
+ (id)createFromDO:(const void *)a0 loiMO:(id)a1 inManagedObjectContext:(id)a2;

- (struct optional<ULOdometryDO> { union { char x0; struct ULOdometryDO { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; float x1; float x2; float x3; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x4; id x5; long long x6; } x1; } x0; BOOL x1; })convertToDO;

@end
