@interface ULControlEventMO : NSManagedObject

@property (nonatomic) short eventType;
@property (nonatomic) double timestamp;

+ (id)fetchRequest;
+ (id)createFromDO:(const void *)a0 inManagedObjectContext:(id)a1;

- (struct optional<ULControlEventDO> { union { char x0; struct ULControlEventDO { long long x0; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x1; } x1; } x0; BOOL x1; })convertToDO;

@end
