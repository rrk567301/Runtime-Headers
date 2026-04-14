@class NSString, RBSAssertion;

@interface _PFTRunningBoardInhibitor : PFTInhibitor

@property (readonly, copy, nonatomic) NSString *explanation;
@property (retain, nonatomic) RBSAssertion *assertion;

+ (id)runningBoardTarget;
+ (id)os_log;

- (void)start;
- (id)description;
- (void)stop;
- (void).cxx_destruct;
- (id)initWithExplanation:(id)a0;

@end
