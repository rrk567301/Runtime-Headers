@class PPSSignpostServiceConnection;

@interface PPSSignpostController : NSObject

@property (retain) PPSSignpostServiceConnection *connection;

+ (id)_workQueue;
+ (void)registerDataCollectionActivity;
+ (void)unregisterDataCollectionActivity;

- (void).cxx_destruct;
- (id)init;
- (void)_clearState;
- (BOOL)_handleTask:(id)a0;
- (id)_lastCollectionDate;
- (BOOL)_performWithStartDate:(id)a0 endDate:(id)a1;
- (id)generateForTimeRange:(id)a0;

@end
