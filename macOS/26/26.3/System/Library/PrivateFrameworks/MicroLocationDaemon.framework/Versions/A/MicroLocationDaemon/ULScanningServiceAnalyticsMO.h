@interface ULScanningServiceAnalyticsMO : NSManagedObject

@property (nonatomic) short scanType;
@property (nonatomic) short displayState;
@property (nonatomic) short scanResult;
@property (nonatomic) double scanningEventTimestamp;
@property (nonatomic) short triggerType;

+ (id)fetchRequest;
+ (id)createFromDO:(const void *)a0 inManagedObjectContext:(id)a1;

- (struct optional<ULScanningServiceAnalyticsDO> { union { char x0; struct ULScanningServiceAnalyticsDO { short x0; short x1; short x2; short x3; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x4; } x1; } x0; BOOL x1; })convertToDO;

@end
