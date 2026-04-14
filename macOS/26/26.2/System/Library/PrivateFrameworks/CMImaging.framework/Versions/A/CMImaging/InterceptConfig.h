@class FigMetalExecutionStatus;

@interface InterceptConfig : NSObject

@property (nonatomic) int interceptLevel;
@property (retain, nonatomic) FigMetalExecutionStatus *executionStatus;
@property (nonatomic) BOOL waitUntilCompleted;
@property (nonatomic) BOOL waitUntilScheduled;
@property (nonatomic) BOOL notifyPostOnGPUError;
@property (nonatomic) unsigned int processTexture;
@property (nonatomic) BOOL validateCommandBuffers;

- (void).cxx_destruct;
- (void)loadExperimentsConfig;
- (id)initWithLevel:(int)a0;

@end
