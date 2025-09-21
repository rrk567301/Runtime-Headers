@class NSString, NSSet, ULCustomLoiMO;

@interface ULLoiMO : NSManagedObject

@property (nonatomic) double lastSeenTimeStamp;
@property (retain, nonatomic) NSString *loiGroupId;
@property (retain, nonatomic) NSString *loiId;
@property (retain, nonatomic) NSString *loiType;
@property (retain, nonatomic) NSSet *anchorAppearanceMap;
@property (retain, nonatomic) NSSet *associatedStates;
@property (retain, nonatomic) ULCustomLoiMO *customLOI;
@property (retain, nonatomic) NSSet *models;
@property (retain, nonatomic) NSSet *rapports;
@property (retain, nonatomic) NSSet *scanningEvents;
@property (retain, nonatomic) NSSet *wifiHistogram;
@property (retain, nonatomic) NSSet *odometryEntries;
@property (retain, nonatomic) NSSet *labels;

+ (id)fetchRequest;
+ (id)createFromDO:(const void *)a0 inManagedObjectContext:(id)a1;
+ (id)createWithLastSeenTimeStamp:(double)a0 loiId:(id)a1 loiGroupId:(id)a2 loiType:(id)a3 inManagedObjectContext:(id)a4;

- (struct optional<ULLoiDO> { union { char x0; struct ULLoiDO { struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x0; struct uuid { unsigned char x0[16]; } x1; struct uuid { unsigned char x0[16]; } x2; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x3; } x1; } x0; BOOL x1; })convertToDO;

@end
