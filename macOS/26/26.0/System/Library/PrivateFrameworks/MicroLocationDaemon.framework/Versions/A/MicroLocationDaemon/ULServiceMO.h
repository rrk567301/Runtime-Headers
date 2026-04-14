@class NSString, NSSet;

@interface ULServiceMO : NSManagedObject

@property (retain, nonatomic) NSString *clientId;
@property (nonatomic) double lastActiveTimestamp;
@property (nonatomic) long long locationTypes;
@property (nonatomic) int serviceType;
@property (retain, nonatomic) NSString *serviceUUID;
@property (retain, nonatomic) NSSet *customLOIs;
@property (retain, nonatomic) NSSet *labels;
@property (retain, nonatomic) NSSet *models;

+ (id)fetchRequest;
+ (id)createFromDO:(const void *)a0 inManagedObjectContext:(id)a1;

- (struct optional<ULServiceDO> { union { char x0; struct ULServiceDO { unsigned long long x0; struct uuid { unsigned char x0[16]; } x1; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x2; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x3; unsigned long long x4; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x5; } x1; } x0; BOOL x1; })convertToDO;

@end
