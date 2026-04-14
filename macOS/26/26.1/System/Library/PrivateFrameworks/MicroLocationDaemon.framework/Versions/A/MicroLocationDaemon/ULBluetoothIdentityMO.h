@class NSString;

@interface ULBluetoothIdentityMO : NSManagedObject

@property (retain, nonatomic) NSString *bluetoothId;
@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) double lastSeenTimeStamp;
@property (retain, nonatomic) NSString *stableIdentifier;

+ (id)fetchRequest;
+ (id)createFromDO:(const void *)a0 inManagedObjectContext:(id)a1;

- (struct optional<ULBluetoothIdentityDO> { union { char x0; struct ULBluetoothIdentityDO { struct uuid { unsigned char x0[16]; } x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x2; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x3; } x1; } x0; BOOL x1; })convertToDO;

@end
