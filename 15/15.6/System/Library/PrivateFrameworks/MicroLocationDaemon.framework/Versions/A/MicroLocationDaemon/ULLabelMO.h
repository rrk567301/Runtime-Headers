@class NSString;

@interface ULLabelMO : NSManagedObject

@property (retain, nonatomic) NSString *clientId;
@property (retain, nonatomic) NSString *labelUUID;
@property (nonatomic) double receivedTimestamp;
@property (retain, nonatomic) NSString *serviceUUID;
@property (retain, nonatomic) NSString *triggerUUID;

+ (id)fetchRequest;
+ (id)createFromEntry:(const void *)a0 inManagedObjectContext:(id)a1;

- (struct optional<CLMicroLocationRecordingLabelsTable::Entry> { union { char x0; struct Entry { struct uuid { unsigned char x0[16]; } x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char x0 : 1; unsigned char x1 : 7; } x0; char x1[0]; char x2[23]; } x0; struct __long { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; unsigned long long x1; char *x2; } x1; } x0; } x0; } x1; struct uuid { unsigned char x0[16]; } x2; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x3; } x1; } x0; BOOL x1; })convertToEntry;

@end
