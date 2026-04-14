@class ULScanningEventMO;

@interface ULWiFiMeasurementMO : NSManagedObject

@property (nonatomic) short channel;
@property (nonatomic) int flags;
@property (nonatomic) int rssi;
@property (nonatomic) long long sourceBSSID;
@property (nonatomic) double timestamp;
@property (nonatomic) short band;
@property (retain, nonatomic) ULScanningEventMO *scanningEvent;

+ (id)fetchRequest;
+ (id)createFromDO:(const void *)a0 withScanningEventMO:(id)a1 inManagedObjectContext:(id)a2;

- (struct optional<ULWiFiMeasurementDO> { union { char x0; struct ULWiFiMeasurementDO { struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x0; int x1; struct CLMacAddress { unsigned long long x0; } x2; short x3; unsigned char x4; unsigned int x5; } x1; } x0; BOOL x1; })convertToDO;

@end
