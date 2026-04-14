@class NSString, RBSAssertion;

@interface _PFTRunningBoardInhibitor : PFTInhibitor

@property (readonly, copy, nonatomic) NSString *explanation;
@property (retain, nonatomic) RBSAssertion *assertion;

+ (id)runningBoardTarget;
+ (id)os_log;

- (void)start;
- (void)stop;
- (id)description;
- (id)initWithExplanation:(id)a0;
- (void).cxx_destruct;

@end
