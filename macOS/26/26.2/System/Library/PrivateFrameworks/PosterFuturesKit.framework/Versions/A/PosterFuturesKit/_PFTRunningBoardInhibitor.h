@class NSString, RBSAssertion;

@interface _PFTRunningBoardInhibitor : PFTInhibitor

@property (readonly, copy, nonatomic) NSString *explanation;
@property (retain, nonatomic) RBSAssertion *assertion;

+ (id)runningBoardTarget;
+ (id)os_log;

- (id)initWithExplanation:(id)a0;
- (void)stop;
- (void).cxx_destruct;
- (void)start;
- (id)description;

@end
