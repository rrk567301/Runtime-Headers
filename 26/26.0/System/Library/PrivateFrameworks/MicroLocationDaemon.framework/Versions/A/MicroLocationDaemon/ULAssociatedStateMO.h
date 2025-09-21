@class ULLoiMO, NSString;

@interface ULAssociatedStateMO : NSManagedObject

@property (nonatomic) int band;
@property (nonatomic) int channel;
@property (nonatomic) BOOL isAssociated;
@property (retain, nonatomic) ULLoiMO *loi;
@property (retain, nonatomic) NSString *macAddress;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSString *loiId_deprecated;

+ (id)fetchRequest;
+ (id)createFromDO:(const void *)a0 withLoiMO:(id)a1 inManagedObjectContext:(id)a2;

- (struct optional<ULAssociatedStateDO> { union { char x0; struct ULAssociatedStateDO { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; struct uuid { unsigned char x0[16]; } x1; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x2; BOOL x3; struct CLMacAddress { unsigned long long x0; } x4; int x5; int x6; } x1; } x0; BOOL x1; })convertToDO;

@end
