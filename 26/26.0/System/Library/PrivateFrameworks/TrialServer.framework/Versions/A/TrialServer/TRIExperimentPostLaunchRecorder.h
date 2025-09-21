@protocol TRIExperimentPostLaunchStoring, TRIExperimentPostLaunchLogging;

@interface TRIExperimentPostLaunchRecorder : NSObject

@property (readonly, nonatomic) id<TRIExperimentPostLaunchStoring> storage;
@property (readonly, nonatomic) id<TRIExperimentPostLaunchLogging> logger;

+ (id)recorderFromContext:(id)a0;

- (BOOL)recordEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithStorage:(id)a0 logger:(id)a1;

@end
