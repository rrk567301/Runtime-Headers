@class NSMutableArray;

@interface IMPerfProfiler : NSObject {
    NSMutableArray *_sinks;
}

+ (id)instance;

- (void).cxx_destruct;
- (id)init;
- (void)logMeasurement:(struct IMPerfMeasurement_t { struct IMFileLocation_t { char *x0; char *x1; char *x2; char *x3; int x4; } x0; unsigned long long x1; unsigned long long x2; struct __CFString *x3; double x4; double x5; double x6; } *)a0;
- (void)addSink:(id)a0 withBehavior:(id)a1;

@end
