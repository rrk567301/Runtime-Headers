@class NSURL;

@interface GTShaderProfilerSessionRequest : NSObject

@property (nonatomic) unsigned int profilerMode;
@property (nonatomic) unsigned int performanceState;
@property (nonatomic) unsigned int executionMode;
@property (retain, nonatomic) NSURL *streamDataToLoad;

- (id)init;
- (void).cxx_destruct;

@end
