@interface _CPLTimingStatistic : NSObject {
    unsigned long long _recordCount;
    unsigned long long _batchCount;
    unsigned long long _errorCount;
    unsigned long long _cancelCount;
    double _duration;
}

- (id)description;
- (void)updateWithDuration:(double)a0 recordCount:(unsigned long long)a1 error:(char)a2 cancelled:(char)a3;

@end
