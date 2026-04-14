@class NSString, NSSet, ULMagnetometerMO, ULLoiMO, NSNumber;

@interface ULScanningEventMO : NSManagedObject

@property (nonatomic) BOOL bleSuspended;
@property (nonatomic) short motionState;
@property (retain, nonatomic) NSString *scanEventUUID;
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

- (struct optional<ULScanningEventDO> { union { char x0; struct ULScanningEventDO { struct uuid { unsigned char x0[16]; } x0; short x1; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x2; short x3; BOOL x4; BOOL x5; BOOL x6; short x7; struct vector<ULLabelDO, std::allocator<ULLabelDO>> { struct ULLabelDO *x0; struct ULLabelDO *x1; struct { struct ULLabelDO *x0; } x2; } x8; struct vector<ULWiFiMeasurementDO, std::allocator<ULWiFiMeasurementDO>> { struct ULWiFiMeasurementDO *x0; struct ULWiFiMeasurementDO *x1; struct { struct ULWiFiMeasurementDO *x0; } x2; } x9; struct vector<ULBLEMeasurementDO, std::allocator<ULBLEMeasurementDO>> { struct ULBLEMeasurementDO *x0; struct ULBLEMeasurementDO *x1; struct { struct ULBLEMeasurementDO *x0; } x2; } x10; struct vector<ULUWBMeasurementDO, std::allocator<ULUWBMeasurementDO>> { struct ULUWBMeasurementDO *x0; struct ULUWBMeasurementDO *x1; struct { struct ULUWBMeasurementDO *x0; } x2; } x11; struct uuid { unsigned char x0[16]; } x12; struct optional<AssociatedAccessPointInfo> { union { char x0; struct AssociatedAccessPointInfo { struct CLMacAddress { unsigned long long x0; } x0; int x1; } x1; } x0; BOOL x1; } x13; struct vector<ULPhotoFeaturesDO, std::allocator<ULPhotoFeaturesDO>> { struct ULPhotoFeaturesDO *x0; struct ULPhotoFeaturesDO *x1; struct { struct ULPhotoFeaturesDO *x0; } x2; } x14; struct optional<ULMagnetometerDO> { union { char x0; struct ULMagnetometerDO { double x0; double x1; struct { float x0; float x1; float x2; } x2; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x3; } x1; } x0; BOOL x1; } x15; } x1; } x0; BOOL x1; })convertToDO;

@end
