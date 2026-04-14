@class NSArray, NSMutableArray;

@interface IMRuntimeTestSuiteTestRun : IMRuntimeTestRun {
    NSMutableArray *_testRuns;
}

@property (readonly, copy) NSArray *testRuns;

- (void).cxx_destruct;
- (id)init;
- (void)addTestRun:(id)a0;

@end
