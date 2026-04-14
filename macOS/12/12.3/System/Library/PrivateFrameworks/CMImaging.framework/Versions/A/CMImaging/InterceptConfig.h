@class FigMetalExecutionStatus;

@interface InterceptConfig : NSObject

@property (nonatomic) int interceptLevel;
@property (retain, nonatomic) FigMetalExecutionStatus *executionStatus;
@property (nonatomic) BOOL waitUntilCompleted;
@property (nonatomic) BOOL waitUntilScheduled;

- (void).cxx_destruct;
- (id)initWithLevel:(int)a0;
- (void)loadExperimentsConfig;

@end
