@class NSString;

@interface CVNLPPerformanceResult : NSObject {
    double maxpeak;
    double peakdelta;
    double recentpeak;
    double current;
    double cpuTime;
    double cpuInstructions;
    double timeInterval;
}

@property (readonly, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)description;
- (id)dict;

@end
