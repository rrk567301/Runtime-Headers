@class NSString;

@interface ULEventLogMO : NSManagedObject

@property (retain, nonatomic) NSString *event;
@property (nonatomic) double timestamp;

+ (id)fetchRequest;
+ (id)createFromDO:(const void *)a0 inManagedObjectContext:(id)a1;

- (struct optional<ULEventLogDO> { union { char x0; struct ULEventLogDO { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x1; } x1; } x0; BOOL x1; })convertToDO;

@end
