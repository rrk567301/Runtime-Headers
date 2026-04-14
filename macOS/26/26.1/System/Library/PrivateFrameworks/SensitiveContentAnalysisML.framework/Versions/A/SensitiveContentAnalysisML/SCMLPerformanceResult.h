@class NSString;

@interface SCMLPerformanceResult : NSObject {
    double maxpeak;
    double peakdelta;
    double recentpeak;
    double current;
    double cpuTime;
    double cpuInstructions;
    double timeInterval;
}

@property (readonly, nonatomic) NSString *name;

- (id)description;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)dict;

@end
