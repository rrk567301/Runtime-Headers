@class NSString, NSSet, ULMagnetometerMO, ULLoiMO, NSNumber;

@interface ULScanningEventMO : NSManagedObject

@property (nonatomic) BOOL bleSuspended;
@property (nonatomic) short motionState;
@property (retain, nonatomic) NSString *scanEventUUID;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (nonatomic) short scanResult;
@property (nonatomic) short scanType;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL uwbSuspended;
@property (nonatomic) BOOL wifiDisabled;
@property (retain, nonatomic) NSNumber *wifiAssociationBSSID;
@property (retain, nonatomic) NSNumber *wifiAssociationRSSI;
@property (retain, nonatomic) NSSet *bleMeasurements;
@property (retain, nonatomic) NSSet *labels;
@property (retain, nonatomic) ULLoiMO *loi;
@property (retain, nonatomic) NSSet *uwbMeasurements;
@property (retain, nonatomic) NSSet *wifiMeasurements;
@property (retain, nonatomic) NSSet *photoFeatures;
@property (retain, nonatomic) ULMagnetometerMO *magnetometer;

+ (id)fetchRequest;
+ (id)createFromDO:(const void *)a0 withLoiMO:(id)a1 inManagedObjectContext:(id)a2;

- (struct optional<ULScanningEventDO> { union { char x0; struct ULScanningEventDO { struct uuid { unsigned char x0[16]; } x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x1; short x2; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x3; short x4; BOOL x5; BOOL x6; BOOL x7; short x8; struct vector<ULLabelDO, std::allocator<ULLabelDO>> { struct ULLabelDO *x0; struct ULLabelDO *x1; struct ULLabelDO *x2; } x9; struct vector<ULWiFiMeasurementDO, std::allocator<ULWiFiMeasurementDO>> { struct ULWiFiMeasurementDO *x0; struct ULWiFiMeasurementDO *x1; struct ULWiFiMeasurementDO *x2; } x10; struct vector<ULBLEMeasurementDO, std::allocator<ULBLEMeasurementDO>> { struct ULBLEMeasurementDO *x0; struct ULBLEMeasurementDO *x1; struct ULBLEMeasurementDO *x2; } x11; struct vector<ULUWBMeasurementDO, std::allocator<ULUWBMeasurementDO>> { struct ULUWBMeasurementDO *x0; struct ULUWBMeasurementDO *x1; struct ULUWBMeasurementDO *x2; } x12; struct uuid { unsigned char x0[16]; } x13; struct optional<AssociatedAccessPointInfo> { union { char x0; struct AssociatedAccessPointInfo { struct CLMacAddress { unsigned long long x0; } x0; int x1; } x1; } x0; BOOL x1; } x14; struct vector<ULPhotoFeaturesDO, std::allocator<ULPhotoFeaturesDO>> { struct ULPhotoFeaturesDO *x0; struct ULPhotoFeaturesDO *x1; struct ULPhotoFeaturesDO *x2; } x15; struct optional<ULMagnetometerDO> { union { char x0; struct ULMagnetometerDO { double x0; double x1; struct { float x0; float x1; float x2; } x2; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x3; } x1; } x0; BOOL x1; } x16; } x1; } x0; BOOL x1; })convertToDO;

@end
