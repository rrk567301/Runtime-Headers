@class NSURL;

@interface GTShaderProfilerSessionRequest : NSObject

@property (nonatomic) unsigned int profilerMode;
@property (nonatomic) unsigned int performanceState;
@property (nonatomic) unsigned int executionMode;
@property (retain, nonatomic) NSURL *streamDataToLoad;

- (void).cxx_destruct;
- (id)init;

@end
