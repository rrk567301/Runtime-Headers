@class NSString, ADLogManager, ADTimeProfiler;

@interface ADExecutorParameters : NSObject

@property (copy, nonatomic) NSString *intermediatesOutputPath;
@property (retain, nonatomic) ADLogManager *logger;
@property (nonatomic) unsigned long long bufferCopyPolicy;
@property (nonatomic) long long stepsToExecute;
@property (retain, nonatomic) ADTimeProfiler *timeProfiler;

- (id)init;
- (void).cxx_destruct;
- (id)initForDevice:(id)a0;

@end
