@class NSString, NSMutableDictionary;

@interface CDPCAReporter : NSObject {
    NSString *_eventName;
    NSMutableDictionary *_reportData;
    unsigned long long _initTime;
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _clock_timebase;
}

- (id)debugDescription;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)initWithEvent:(id)a0;
- (void)sendReport;
- (double)machAbsoluteTimeToTimeInterval:(unsigned long long)a0;

@end
