@class NSString, RBSAssertion;

@interface _PFTRunningBoardInhibitor : PFTInhibitor

@property (readonly, copy, nonatomic) NSString *explanation;
@property (retain, nonatomic) RBSAssertion *assertion;

+ (id)os_log;
+ (id)runningBoardTarget;

- (void)stop;
- (id)initWithExplanation:(id)a0;
- (void).cxx_destruct;
- (void)start;
- (id)description;

@end
