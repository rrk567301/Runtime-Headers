@class DMCBackgroundTask;

@interface DMCNagScheduler : NSObject

@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, retain) DMCBackgroundTask *backgroundTask;

- (id)init;
- (void).cxx_destruct;
- (BOOL)evaluateNagsWithBackgroundTask:(id)a0;
- (void)stopNaggingItemWithID:(id)a0 clientID:(id)a1;
- (void)deleteNagItemWithId:(id)a0 clientID:(id)a1;
- (BOOL)evaluateNags;
- (id)initWithTaskName:(id)a0 delegate:(id)a1;
- (id)launchDeadlineActionFor:(id)a0;
- (void)launchDeadlineURLString:(id)a0;
- (BOOL)nag:(id)a0 error:(id *)a1;
- (id)nagItemsWithError:(id *)a0;
- (id)nextNagForItems:(id)a0;
- (BOOL)saveNagItem:(id)a0 error:(id *)a1;
- (BOOL)startNaggingItem:(id)a0 error:(id *)a1;

@end
