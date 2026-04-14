@class NSString, RBSAssertion;

@interface _PFTRunningBoardInhibitor : PFTInhibitor

@property (readonly, copy, nonatomic) NSString *explanation;
@property (retain, nonatomic) RBSAssertion *assertion;

+ (id)runningBoardTarget;
+ (id)os_log;

- (void)start;
- (id)initWithExplanation:(id)a0;
- (void)stop;
- (id)description;
- (void).cxx_destruct;

@end
