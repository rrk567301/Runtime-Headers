@class NSDictionary;

@interface SKGProcessorTaskManager : NSObject {
    NSDictionary *_tasks;
}

+ (id)sharedManager;
+ (id)breadcrumbsTask;
+ (id)keyphraseTask;

- (void).cxx_destruct;
- (id)init;
- (id)tasks;
- (id)taskForName:(id)a0;

@end
