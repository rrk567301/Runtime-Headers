@class NSString, ULScanningEventMO, NSSet, ULServiceMO, ULLoiMO, NSData;

@interface ULLabelMO : NSManagedObject

@property (retain, nonatomic) NSString *labelID;
@property (nonatomic) double receivedTimestamp;
@property (nonatomic) short contextLayerType;
@property (nonatomic) short deviceClass;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) ULScanningEventMO *scanningEvent;
@property (retain, nonatomic) ULServiceMO *service;
@property (retain, nonatomic) NSSet *mapLabels;
@property (retain, nonatomic) ULLoiMO *loi;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *serviceUUID_deprecated;
@property (retain, nonatomic) NSString *triggerUUID_deprecated;

+ (id)fetchRequest;
+ (id)createFromDO:(const void *)a0 withLoi:(id)a1 inManagedObjectContext:(id)a2;
+ (id)createFromDO:(const void *)a0 withScanningEventMO:(id)a1 serviceMO:(id)a2 inManagedObjectContext:(id)a3;

- (struct optional<ULLabelDOAndObjectID> { union { char x0; struct ULLabelDOAndObjectID { struct ULLabelDO { unsigned long long x0; unsigned long long x1; struct optional<boost::uuids::uuid> { union { char x0; struct uuid { unsigned char x0[16]; } x1; } x0; BOOL x1; } x2; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x3; struct optional<boost::uuids::uuid> { union { char x0; struct uuid { unsigned char x0[16]; } x1; } x0; BOOL x1; } x4; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x5; struct optional<std::variant<ULLabelDataWiFi>> { union { char x0; struct variant<ULLabelDataWiFi> { struct __impl<ULLabelDataWiFi> { union __union<std::__variant_detail::_Trait::_Available, 0UL, ULLabelDataWiFi> { char x0; struct __alt<0UL, ULLabelDataWiFi> { struct ULLabelDataWiFi { void /* function */ **x0; long long x1; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL> { } x2; } x0; unsigned int x1; } x0; } x1; } x0; BOOL x1; } x6; } x0; id x1; } x1; } x0; BOOL x1; })convertToDO;

@end
