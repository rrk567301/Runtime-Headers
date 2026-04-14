@class TILanguageModelOfflineLearningTask, NSObject;
@protocol OS_dispatch_queue;

@interface TILanguageModelOfflineLearningAgent : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) TILanguageModelOfflineLearningTask *currentLearningTask;

+ (id)sharedLearningAgent;
+ (id)contactRecordsForRecipients:(id)a0;
+ (void)didFinishLearningWithAgent:(id)a0 task:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)performLearningIfNecessaryWithStrategy:(id)a0 lastAdaptationTime:(double)a1;
- (void)performTaskInBackground:(id /* block */)a0;
- (BOOL)continueLearningTaskWithStrategy:(id)a0;
- (void)handleRemovalOfLearnedModels;

@end
