@class NSMutableDictionary;

@interface _KSTaskScheduler : NSObject

@property (retain, nonatomic) NSMutableDictionary *allTasks;

+ (id)sharedInstance;

- (void)registerTask:(id)a0;
- (id)init;
- (void)unregisterTask:(id)a0;
- (void).cxx_destruct;

@end
