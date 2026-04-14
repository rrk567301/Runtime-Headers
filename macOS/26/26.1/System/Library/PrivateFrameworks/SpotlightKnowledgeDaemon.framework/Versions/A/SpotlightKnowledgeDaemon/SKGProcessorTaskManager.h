@class NSDictionary;

@interface SKGProcessorTaskManager : NSObject {
    NSDictionary *_tasks;
}

+ (id)sharedManager;
+ (id)breadcrumbsTask;
+ (id)keyphraseTask;

- (id)tasks;
- (void).cxx_destruct;
- (id)init;
- (id)taskForName:(id)a0;

@end
