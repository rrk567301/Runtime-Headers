@interface ULMagnetometerProvider : NSObject

+ (id)sharedInstance;

- (void)stopUpdates;
- (void)startUpdates;
- (struct optional<ULMagnetometerDO> { union { char x0; struct ULMagnetometerDO { double x0; double x1; struct { float x0; float x1; float x2; } x2; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x3; } x1; } x0; BOOL x1; })fetchMagnetometerData;

@end
