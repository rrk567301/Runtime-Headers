@class NSError, CBDevice;

@interface CBHIDPerformanceSummary : NSObject

@property (retain, nonatomic) CBDevice *device;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) double errorRate;
@property (nonatomic) double intervalSecondsExpected;
@property (nonatomic) double intervalSecondsMax;
@property (nonatomic) double P50;
@property (nonatomic) double P50Max;
@property (nonatomic) double P75;
@property (nonatomic) double P75Max;
@property (nonatomic) double P90;
@property (nonatomic) double P90Max;
@property (nonatomic) double P95;
@property (nonatomic) double P95Max;
@property (nonatomic) double P99;
@property (nonatomic) double P99Max;
@property (nonatomic) char rssi;
@property (nonatomic) BOOL finalSummary;

- (void).cxx_destruct;

@end
