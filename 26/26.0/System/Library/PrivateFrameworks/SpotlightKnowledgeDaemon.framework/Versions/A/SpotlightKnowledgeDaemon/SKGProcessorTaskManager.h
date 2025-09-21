@class NSDictionary;

@interface SKGProcessorTaskManager : NSObject {
    NSDictionary *_tasks;
}

+ (id)sharedManager;
+ (id)breadcrumbsTask;
+ (id)keyphraseTask;

- (id)tasks;
- (id)init;
- (void).cxx_destruct;
- (id)taskForName:(id)a0;

@end
