@class NSMutableArray;

@interface TSUPerformanceTestHarness : NSObject {
    NSMutableArray *mTestCases;
    struct timeval { long long tv_sec; int tv_usec; } mSetupTime;
}

@property (nonatomic) char quiet;
@property (readonly, nonatomic) long long passingTestCount;
@property (readonly, nonatomic) long long testCount;
@property (readonly, nonatomic) char passed;

+ (id)harness;

- (void)dealloc;
- (id)init;
- (void)cleanup;
- (void)report;
- (void)setup;
- (void)testSuite;
- (id)testWithName:(id)a0 selector:(SEL)a1 goalTime:(double)a2;
- (id)p_createResultDirectory;
- (void)p_writeCsvResultsToDirectory:(id)a0;
- (void)p_writeSystemConfigurationToDirectory:(id)a0;
- (void)runTestWithName:(id)a0 selector:(SEL)a1 goalTime:(double)a2;
- (void)runTestWithName:(id)a0 selector:(SEL)a1 goalTime:(double)a2 precision:(double)a3;
- (char)runTests;

@end
