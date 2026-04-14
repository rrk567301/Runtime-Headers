@interface Stopwatch : NSObject {
    double startTime;
    double finishTime;
}

- (double)runTime;
- (void)finish;
- (void)start;

@end
