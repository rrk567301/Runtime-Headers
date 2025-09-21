@class ULLabelMO, NSData, NSNumber, ULModelMO;

@interface ULMapLabelMO : NSManagedObject

@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSNumber *x;
@property (retain, nonatomic) NSNumber *y;
@property (retain, nonatomic) NSNumber *z;
@property (retain, nonatomic) NSData *probabilityVector;
@property (retain, nonatomic) NSData *imageIdentifiersVector;
@property (retain, nonatomic) ULModelMO *model;
@property (retain, nonatomic) ULLabelMO *label;

+ (id)fetchRequest;
+ (id)createFromDO:(const void *)a0 withLabelMO:(id)a1 modelMO:(id)a2 inManagedObjectContext:(id)a3;

- (struct optional<ULMapLabelDO> { union { char x0; struct ULMapLabelDO { struct optional<ULPointLocation> { union { char x0; struct ULPointLocation { float x0; float x1; float x2; } x1; } x0; BOOL x1; } x0; struct optional<std::vector<float>> { union { char x0; struct vector<float, std::allocator<float>> { float *x0; float *x1; float *x2; } x1; } x0; BOOL x1; } x1; struct optional<std::vector<boost::uuids::uuid>> { union { char x0; struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid *x0; struct uuid *x1; struct uuid *x2; } x1; } x0; BOOL x1; } x2; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x3; struct ULLabelDO { unsigned long long x0; unsigned long long x1; struct optional<boost::uuids::uuid> { union { char x0; struct uuid { unsigned char x0[16]; } x1; } x0; BOOL x1; } x2; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x3; struct optional<boost::uuids::uuid> { union { char x0; struct uuid { unsigned char x0[16]; } x1; } x0; BOOL x1; } x4; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x5; struct optional<std::variant<ULLabelDataWiFi>> { union { char x0; struct variant<ULLabelDataWiFi> { struct __impl<ULLabelDataWiFi> { union __union<std::__variant_detail::_Trait::_Available, 0UL, ULLabelDataWiFi> { char x0; struct __alt<0UL, ULLabelDataWiFi> { struct ULLabelDataWiFi { void /* function */ **x0; long long x1; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL> { } x2; } x0; unsigned int x1; } x0; } x1; } x0; BOOL x1; } x6; } x4; struct uuid { unsigned char x0[16]; } x5; } x1; } x0; BOOL x1; })convertToDO;

@end
