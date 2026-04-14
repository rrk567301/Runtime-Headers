@interface Stopwatch : NSObject {
    double startTime;
    double finishTime;
}

- (double)runTime;
- (void)start;
- (void)finish;

@end
