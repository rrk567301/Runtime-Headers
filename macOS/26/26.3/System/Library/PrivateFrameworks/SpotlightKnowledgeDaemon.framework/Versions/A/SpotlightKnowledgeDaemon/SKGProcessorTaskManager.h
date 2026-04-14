@class NSDictionary;

@interface SKGProcessorTaskManager : NSObject {
    NSDictionary *_tasks;
}

+ (id)sharedManager;
+ (id)breadcrumbsTask;
+ (id)keyphraseTask;

- (id)init;
- (void).cxx_destruct;
- (id)tasks;
- (id)taskForName:(id)a0;

@end
