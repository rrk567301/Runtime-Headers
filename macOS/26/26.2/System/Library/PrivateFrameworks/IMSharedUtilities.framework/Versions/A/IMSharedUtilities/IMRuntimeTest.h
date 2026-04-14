@class IMRuntimeTestRun;

@interface IMRuntimeTest : NSObject

@property (retain) IMRuntimeTestRun *testRun;
@property (copy) id /* block */ completion;

+ (id)logHandle;
+ (id)testName;
+ (void)testLog:(id)a0;

- (id)logHandle;
- (void)tearDown;
- (id)testName;
- (void).cxx_destruct;
- (void)startTest;
- (void)setUp;
- (void)dispatchAfter:(double)a0 block:(id /* block */)a1;
- (void)finishTest;
- (void)finishTestAfterInterval:(double)a0;
- (void)runTest:(id /* block */)a0;
- (void)testLog:(id)a0;
- (Class)testRunClass;

@end
