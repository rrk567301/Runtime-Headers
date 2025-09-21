@class NSMutableDictionary, PFWorkContext, NSDate, NSError, PFJobTimer;

@interface PFJob : NSObject

@property unsigned long long jobId;
@property (retain) id uuid;
@property (weak) PFWorkContext *workContext;
@property (retain) NSMutableDictionary *results;
@property (retain) NSDate *start;
@property (retain) NSDate *stop;
@property NSError *error;
@property (retain) id item;
@property unsigned long long jobCountIncrement;
@property (retain) PFJobTimer *timer;
@property (copy) id /* block */ batchStartBlock;
@property (copy) id /* block */ batchCompletionBlock;
@property (retain) id batchUuid;

- (double)runTime;
- (id)copy;
- (id)valueForKey:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)setValue:(id)a0 forKey:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isTimer;
- (id)initWithWorkContext:(id)a0;

@end
