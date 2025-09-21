@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BGSystemTaskCheckpoints : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *taskToProgressMap;

+ (id)sharedInstance;
+ (id)logger;
+ (char)reportCustomCheckpoint:(unsigned long long)a0 forTask:(id)a1 error:(id *)a2;
+ (char)reportFeatureCheckpoint:(unsigned long long)a0 forFeature:(unsigned long long)a1 error:(id *)a2;
+ (char)validateFeatureCheckpoint:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (char)reportProgressForTaskWithName:(id)a0 withGlobalTarget:(unsigned long long)a1 completed:(unsigned long long)a2 atDate:(id)a3 category:(unsigned long long)a4 subCategory:(id)a5 error:(id *)a6;

@end
