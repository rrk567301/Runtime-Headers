@interface AVProgressEstimator : NSObject <NSCopying> {
    double _memory;
    double _progress[2];
    double _TISRD[2];
}

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setProgress:(double)a0;
- (void)reset;
- (id)init;
- (id)estimatedDateForProgress:(double)a0;
- (double)estimatedProgressForDate:(id)a0;

@end
