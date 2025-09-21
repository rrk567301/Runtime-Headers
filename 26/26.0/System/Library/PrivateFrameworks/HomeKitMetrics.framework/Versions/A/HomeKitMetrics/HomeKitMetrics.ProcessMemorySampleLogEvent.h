@interface HomeKitMetrics.ProcessMemorySampleLogEvent : HMMLogEvent {
    void /* unknown type, empty encoding */ currentMemoryUsage;
    void /* unknown type, empty encoding */ intervalMaxMemoryUsage;
}

- (id)init;
- (id)initWithStartTime:(double)a0;

@end
