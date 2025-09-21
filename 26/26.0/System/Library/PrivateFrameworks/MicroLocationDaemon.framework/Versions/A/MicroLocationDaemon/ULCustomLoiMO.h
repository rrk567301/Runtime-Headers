@class ULLoiMO, NSString, ULServiceMO;

@interface ULCustomLoiMO : NSManagedObject

@property (nonatomic) double lastSeenTimeStamp;
@property (retain, nonatomic) ULLoiMO *loi;
@property (retain, nonatomic) ULServiceMO *service;
@property (retain, nonatomic) NSString *loiId_deprecated;
@property (retain, nonatomic) NSString *serviceId_deprecated;

+ (id)fetchRequest;
+ (id)createFromDO:(const void *)a0 withServiceMO:(id)a1 loiMO:(id)a2 inManagedObjectContext:(id)a3;

- (struct optional<ULCustomLoiDO> { union { char x0; struct ULCustomLoiDO { struct uuid { unsigned char x0[16]; } x0; struct uuid { unsigned char x0[16]; } x1; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x2; } x1; } x0; BOOL x1; })convertToDO;

@end
