@class IMRuntimeTest;

@interface IMRuntimeTestRun : NSObject

@property (getter=hasSucceeded) BOOL succeeded;
@property (readonly) IMRuntimeTest *test;

- (void)stop;
- (void).cxx_destruct;
- (void)start;
- (id)initWithTest:(id)a0;
- (void)recordFailureWithDescription:(id)a0 inFile:(id)a1 atLine:(unsigned long long)a2 expected:(BOOL)a3;

@end
