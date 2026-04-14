@class IMRuntimeTestRun;

@interface IMRuntimeTest : NSObject

@property (retain) IMRuntimeTestRun *testRun;
@property (copy) id /* block */ completion;

+ (id)logHandle;
+ (id)testName;
+ (void)testLog:(id)a0;

- (void).cxx_destruct;
- (void)tearDown;
- (void)setUp;
- (id)logHandle;
- (id)testName;
- (void)testLog:(id)a0;
- (void)startTest;
- (void)finishTest;
- (Class)testRunClass;
- (void)runTest:(id /* block */)a0;
- (void)dispatchAfter:(double)a0 block:(id /* block */)a1;
- (void)finishTestAfterInterval:(double)a0;

@end
