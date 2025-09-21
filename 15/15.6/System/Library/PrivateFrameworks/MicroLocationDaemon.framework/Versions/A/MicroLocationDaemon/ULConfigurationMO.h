@class NSString, NSData;

@interface ULConfigurationMO : NSManagedObject

@property (retain, nonatomic) NSString *anchorStatsModelUUID;
@property (retain, nonatomic) NSData *configuration;
@property (nonatomic) int configurationType;
@property (nonatomic) double generationTimestamp;
@property (retain, nonatomic) NSString *loiId;
@property (retain, nonatomic) NSString *loiType;

+ (id)fetchRequest;
+ (id)createFromEntry:(const void *)a0 inManagedObjectContext:(id)a1;

- (struct optional<CLMicroLocationConfigurationTable::Entry> { union { char x0; struct Entry { struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char x0 : 1; unsigned char x1 : 7; } x0; char x1[0]; char x2[23]; } x0; struct __long { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; unsigned long long x1; char *x2; } x1; } x0; } x0; } x1; struct uuid { unsigned char x0[16]; } x2; int x3; struct Configuration { void /* function */ **x0; double x1; struct WifiHistogram *x2; struct AnchorAppearanceConfiguration *x3; struct AnchorValueStatisticsConfiguration *x4; int x5; int x6; unsigned int x7[1]; } x4; } x1; } x0; BOOL x1; })convertToEntry;

@end
