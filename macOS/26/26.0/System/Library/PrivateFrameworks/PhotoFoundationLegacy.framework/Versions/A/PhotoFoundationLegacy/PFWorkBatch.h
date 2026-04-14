@class NSMutableDictionary, PFWorkContext, NSArray, NSError, NSMutableArray, NSDate;

@interface PFWorkBatch : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property unsigned long long currentJobIndex;
@property unsigned long long nextJobIndex;
@property unsigned long long lastJobIndex;
@property (retain) id uuid;
@property (retain, nonatomic) NSError *beginResult;
@property (retain, nonatomic) NSMutableArray *jobs;
@property (retain) NSMutableDictionary *jobsByUuid;
@property (readonly, nonatomic) unsigned long long jobCount;
@property (retain, nonatomic) PFWorkContext *workContext;
@property (retain, nonatomic) NSDate *startTime;
@property (retain) NSMutableDictionary *userInfo;
@property (readonly) NSArray *unprocessedJobs;
@property (readonly) unsigned long long unprocessedJobCount;

- (id)valueForKey:(id)a0;
- (id)init;
- (void)removeJob:(id)a0;
- (void)addJob:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)nextJob;
- (id)initWithWorkContext:(id)a0;
- (id)jobForUuid:(id)a0;
- (void)removeAllJobs;

@end
